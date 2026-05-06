#!/usr/bin/env python3
"""Plot value/reference semantics benchmark results.

The script consumes hyperfine CSV files produced by:

  scripts/value_semantics/run_cmp.sh
  scripts/value_semantics/generator/run_bench.sh

For paper-style scaling plots, keep multiple run_cmp outputs under
scripts/value_semantics/scaling/ with filenames that include N and V, e.g.

  results_V1000_N10000.csv
  results_V8000_N2000000.csv

The default single-run plots still work with scripts/value_semantics/results.csv.
"""

from __future__ import annotations

import argparse
import csv
import math
import re
from dataclasses import dataclass
from pathlib import Path

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt
import numpy as np


ROOT = Path(__file__).resolve().parent
OUT_DIR = ROOT / "plots"

plt.rcParams.update({
    "font.family": "serif",
    "font.size": 11,
    "axes.titlesize": 13,
    "axes.labelsize": 11,
    "xtick.labelsize": 10,
    "ytick.labelsize": 10,
    "legend.fontsize": 10,
    "figure.dpi": 160,
    "savefig.dpi": 180,
    "savefig.bbox": "tight",
    "savefig.pad_inches": 0.05,
})

COLORS = {
    "ref": "#1296db",
    "val": "#59d331",
    "aos": "#ffb000",
    "soa": "#009e73",
    "mrc": "#785ef0",
    "ptr": "#dc267f",
    "rust": "#648fff",
    "gray": "#777777",
}

DLIST_OPS = [
    ("append", "Insertion at the end"),
    ("traverse", "Traversal"),
    ("remove_all", "Remove all"),
    ("remove_half_traverse", "Remove half + traverse"),
]
WEBGRAPH_OPS = [
    ("build", "Build"),
    ("tarjan", "Tarjan SCC"),
    ("dijkstra", "Dijkstra"),
]


@dataclass(frozen=True)
class ScaleRun:
    path: Path
    V: int | None
    N: int | None
    data: dict[str, float]


def load_csv(path: Path) -> dict[str, float]:
    with open(path, newline="") as f:
        return {row["command"]: float(row["mean"]) for row in csv.DictReader(f)}


def parse_scale(path: Path) -> tuple[int | None, int | None]:
    text = path.stem
    v = re.search(r"(?:^|[_-])V(\d+)(?:[_-]|$)", text)
    n = re.search(r"(?:^|[_-])N(\d+)(?:[_-]|$)", text)
    return (int(v.group(1)) if v else None, int(n.group(1)) if n else None)


def save(fig: plt.Figure, name: str) -> None:
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    pdf = OUT_DIR / f"{name}.pdf"
    png = OUT_DIR / f"{name}.png"
    fig.savefig(pdf)
    fig.savefig(png)
    plt.close(fig)
    print(f"Saved {pdf}")
    print(f"Saved {png}")


def setup_log_axis(ax: plt.Axes, ylabel: str = "Execution time (s)") -> None:
    ax.set_yscale("log")
    ax.set_ylabel(ylabel)
    ax.grid(axis="y", which="both", alpha=0.28, linewidth=0.6)
    ax.set_axisbelow(True)


def grouped_bars(ax: plt.Axes, labels: list[str], series: list[tuple[str, str, list[float]]]) -> None:
    x = np.arange(len(labels))
    width = min(0.22, 0.78 / max(1, len(series)))
    offset0 = -width * (len(series) - 1) / 2
    for i, (name, color, values) in enumerate(series):
        ax.bar(x + offset0 + i * width, values, width, label=name, color=color, edgecolor="white", linewidth=0.5)
    ax.set_xticks(x)
    ax.set_xticklabels(labels, rotation=18, ha="right")
    ax.legend(frameon=False, ncol=min(4, len(series)))


def plot_single_dlist(data: dict[str, float]) -> None:
    labels = [title for _, title in DLIST_OPS]
    series = [
        ("Reference ptr (C++ O3)", COLORS["ref"], [data[f"dlist_{op}_naive_O3"] for op, _ in DLIST_OPS]),
        ("Value AoS (C++ O3)", COLORS["aos"], [data[f"dlist_{op}_cpp_aos_O3"] for op, _ in DLIST_OPS]),
        ("Value SoA (C++ O3)", COLORS["soa"], [data[f"dlist_{op}_cpp_soa_O3"] for op, _ in DLIST_OPS]),
        ("minirustc AoS", COLORS["mrc"], [data[f"dlist_{op}_minirustc_aos"] for op, _ in DLIST_OPS]),
        ("minirustc SoA", "#b07cff", [data[f"dlist_{op}_minirustc_soa"] for op, _ in DLIST_OPS]),
    ]
    fig, ax = plt.subplots(figsize=(9.5, 4.6))
    grouped_bars(ax, labels, series)
    setup_log_axis(ax)
    ax.set_title("Doubly-linked list operations")
    save(fig, "dlist_single_run")


def plot_single_webgraph(data: dict[str, float]) -> None:
    labels = [title for _, title in WEBGRAPH_OPS]
    series = [
        ("Reference ptr (C++ O3)", COLORS["ref"], [data[f"webgraph_{op}_naive_O3"] for op, _ in WEBGRAPH_OPS]),
        ("Value CSR (C++ O3)", COLORS["val"], [data[f"webgraph_{op}_efficient_O3"] for op, _ in WEBGRAPH_OPS]),
        ("Value CSR (minirustc)", COLORS["mrc"], [data[f"webgraph_{op}_minirustc"] for op, _ in WEBGRAPH_OPS]),
    ]
    fig, ax = plt.subplots(figsize=(7.6, 4.4))
    grouped_bars(ax, labels, series)
    setup_log_axis(ax)
    ax.set_title("WebGraph operations")
    save(fig, "webgraph_single_run")


def plot_generator(data: dict[str, float]) -> None:
    names = [
        ("minirustc", "minirustc", COLORS["mrc"]),
        ("minirustc_AoS", "minirustc AoS", "#b07cff"),
        ("rust_box", "Rust Box ptr", COLORS["ptr"]),
        ("rust_arena", "Rust arena", COLORS["rust"]),
        ("cpp_ptr_O3", "C++ ptr O3", "#c23b22"),
        ("cpp_arena_O3", "C++ arena O3", COLORS["soa"]),
    ]
    labels = [label for key, label, _ in names if key in data]
    values = [data[key] for key, _, _ in names if key in data]
    colors = [color for key, _, color in names if key in data]

    fig, ax = plt.subplots(figsize=(8.2, 4.2))
    x = np.arange(len(labels))
    ax.bar(x, values, color=colors, edgecolor="white", linewidth=0.5)
    ax.set_xticks(x)
    ax.set_xticklabels(labels, rotation=18, ha="right")
    setup_log_axis(ax)
    ax.set_title("Generator: recursive tree traversal")
    ax.text(0.01, 0.96, "Pointer versions can win when the recursive tree stays hot.",
            transform=ax.transAxes, va="top", ha="left", fontsize=10, color="#333")
    save(fig, "generator_single_run")


def plot_summary(data: dict[str, float], gen: dict[str, float] | None) -> None:
    rows: list[tuple[str, float, str]] = []
    for op, title in DLIST_OPS:
        ref = data[f"dlist_{op}_naive_O3"]
        val = min(data[f"dlist_{op}_cpp_aos_O3"], data[f"dlist_{op}_cpp_soa_O3"])
        rows.append((f"DList: {title}", ref / val, "value/reference"))
    for op, title in WEBGRAPH_OPS:
        ref = data[f"webgraph_{op}_naive_O3"]
        val = data[f"webgraph_{op}_efficient_O3"]
        rows.append((f"WebGraph: {title}", ref / val, "value/reference"))
    if gen and "cpp_ptr_O3" in gen and "cpp_arena_O3" in gen:
        rows.append(("Generator: C++ ptr vs arena", gen["cpp_arena_O3"] / gen["cpp_ptr_O3"], "ptr/arena"))

    labels = [r[0] for r in rows]
    values = [r[1] for r in rows]
    colors = [COLORS["val"] if tag == "value/reference" else COLORS["ptr"] for _, _, tag in rows]

    fig, ax = plt.subplots(figsize=(10, 4.8))
    x = np.arange(len(labels))
    ax.bar(x, values, color=colors, edgecolor="white", linewidth=0.5)
    ax.axhline(1.0, color="#444", linewidth=0.8)
    ax.set_ylabel("Speedup ratio (higher is better)")
    ax.set_xticks(x)
    ax.set_xticklabels(labels, rotation=25, ha="right")
    ax.grid(axis="y", alpha=0.25, linewidth=0.6)
    ax.set_axisbelow(True)
    ax.set_title("Where value semantics help, and where pointers still win")
    save(fig, "speedup_summary")


def discover_scale_runs(scale_dir: Path) -> list[ScaleRun]:
    runs: list[ScaleRun] = []
    if not scale_dir.exists():
        return runs
    for path in sorted(scale_dir.glob("*.csv")):
        V, N = parse_scale(path)
        if V is None and N is None:
            continue
        runs.append(ScaleRun(path=path, V=V, N=N, data=load_csv(path)))
    return runs


def plot_dlist_scaling(runs: list[ScaleRun]) -> None:
    d_runs = sorted([r for r in runs if r.N is not None], key=lambda r: r.N or 0)
    if len(d_runs) < 2:
        return

    fig, axes = plt.subplots(2, 2, figsize=(9.5, 7.2), sharex=True)
    axes = list(axes.ravel())
    xs = [r.N for r in d_runs]

    for ax, (op, title) in zip(axes, DLIST_OPS):
        ref = [r.data.get(f"dlist_{op}_naive_O3", math.nan) for r in d_runs]
        aos = [r.data.get(f"dlist_{op}_cpp_aos_O3", math.nan) for r in d_runs]
        soa = [r.data.get(f"dlist_{op}_cpp_soa_O3", math.nan) for r in d_runs]
        cpp_best = [min(a, s) for a, s in zip(aos, soa)]
        mrc_aos = [r.data.get(f"dlist_{op}_minirustc_aos", math.nan) for r in d_runs]
        mrc_soa = [r.data.get(f"dlist_{op}_minirustc_soa", math.nan) for r in d_runs]
        mrc_best = [min(a, s) for a, s in zip(mrc_aos, mrc_soa)]
        ax.plot(xs, ref, marker="o", color=COLORS["ref"], linewidth=1.8, label="Reference ptr")
        ax.plot(xs, cpp_best, marker="D", color=COLORS["val"], linewidth=2.0, label="Value C++ best")
        ax.plot(xs, mrc_best, marker="P", color=COLORS["mrc"], linewidth=2.0, label="Value minirustc best")
        ax.plot(xs, aos, marker="s", color=COLORS["aos"], linestyle="--", linewidth=1.2, label="C++ AoS")
        ax.plot(xs, soa, marker="^", color=COLORS["soa"], linestyle="--", linewidth=1.2, label="C++ SoA")
        ax.set_xscale("log")
        ax.set_yscale("log")
        ax.set_title(title)
        ax.grid(True, which="both", alpha=0.25, linewidth=0.6)
    axes[0].legend(frameon=False, ncol=3, loc="upper left", bbox_to_anchor=(0, 1.32))
    for ax in axes[2:]:
        ax.set_xlabel("# of elements")
    for ax in axes[::2]:
        ax.set_ylabel("Execution time (s)")
    fig.suptitle("Basis operations on doubly-linked lists", y=1.02, fontsize=15, fontweight="bold")
    save(fig, "dlist_scaling")


def plot_webgraph_scaling(runs: list[ScaleRun]) -> None:
    w_runs = sorted([r for r in runs if r.V is not None], key=lambda r: r.V or 0)
    if len(w_runs) < 2:
        return

    fig, axes = plt.subplots(1, 3, figsize=(11, 3.8), sharex=True)
    xs = [r.V for r in w_runs]
    for ax, (op, title) in zip(axes, WEBGRAPH_OPS):
        ref = [r.data.get(f"webgraph_{op}_naive_O3", math.nan) for r in w_runs]
        val = [r.data.get(f"webgraph_{op}_efficient_O3", math.nan) for r in w_runs]
        mrc = [r.data.get(f"webgraph_{op}_minirustc", math.nan) for r in w_runs]
        ax.plot(xs, ref, marker="o", color=COLORS["ref"], linewidth=1.8, label="Reference ptr")
        ax.plot(xs, val, marker="s", color=COLORS["val"], linewidth=2.0, label="Value C++ CSR")
        ax.plot(xs, mrc, marker="^", color=COLORS["mrc"], linewidth=2.0, label="Value minirustc CSR")
        ax.set_xscale("log")
        ax.set_yscale("log")
        ax.set_title(title)
        ax.set_xlabel("# of vertices")
        ax.grid(True, which="both", alpha=0.25, linewidth=0.6)
    axes[0].set_ylabel("Execution time (s)")
    axes[0].legend(frameon=False)
    fig.suptitle("WebGraph: pointer graph vs CSR value graph", y=1.04, fontsize=15, fontweight="bold")
    save(fig, "webgraph_scaling")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--cmp", type=Path, default=ROOT / "results.csv",
                        help="run_cmp.sh hyperfine CSV")
    parser.add_argument("--generator", type=Path, default=ROOT / "generator" / "results.csv",
                        help="generator/run_bench.sh hyperfine CSV")
    parser.add_argument("--scale-dir", type=Path, default=ROOT / "scaling",
                        help="directory containing multi-scale run_cmp CSV files")
    args = parser.parse_args()

    if not args.cmp.exists():
        raise SystemExit(f"missing {args.cmp}; run bash scripts/value_semantics/run_cmp.sh first")

    cmp_data = load_csv(args.cmp)
    gen_data = load_csv(args.generator) if args.generator.exists() else None

    plot_single_dlist(cmp_data)
    plot_single_webgraph(cmp_data)
    if gen_data:
        plot_generator(gen_data)
    plot_summary(cmp_data, gen_data)

    scale_runs = discover_scale_runs(args.scale_dir)
    plot_dlist_scaling(scale_runs)
    plot_webgraph_scaling(scale_runs)
    if len(scale_runs) < 2:
        print(f"No scaling plots: put multiple CSVs in {args.scale_dir} named like results_V8000_N2000000.csv")


if __name__ == "__main__":
    main()
