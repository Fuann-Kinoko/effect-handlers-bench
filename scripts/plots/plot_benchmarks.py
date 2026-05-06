#!/usr/bin/env python3
"""Plot effect-handlers benchmark results.

Reads all benchmarks/*/results.csv, normalizes benchmark names,
and generates comparison charts (bar + line) in scripts/plots/.
"""

import csv
import os
import sys
from collections import defaultdict
from pathlib import Path

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
import numpy as np


BENCH_DIR = Path(__file__).resolve().parent.parent.parent / "benchmarks"
OUT_DIR = Path(__file__).resolve().parent

# Style close to common paper aesthetics
plt.rcParams.update({
    "font.family": "serif",
    "font.size": 11,
    "axes.titlesize": 13,
    "axes.labelsize": 11,
    "xtick.labelsize": 9,
    "ytick.labelsize": 9,
    "legend.fontsize": 9,
    "figure.dpi": 150,
    "savefig.dpi": 150,
    "savefig.bbox": "tight",
    "savefig.pad_inches": 0.05,
})

# Colour-blind friendly (IBM / Wong palette)
COLORS = {
    "minirustc": "#648FFF",
    "eff":       "#785EF0",
    "hia":       "#DC267F",
    "koka":      "#FE6100",
    "ocaml":     "#FFB000",
    "libmpeff":  "#009E73",
    "libseff":   "#56B4E9",
    "effekt":    "#CC79A7",
}


def parse_benchmark_name(raw: str) -> str:
    """Normalise a hyperfine command line to the canonical benchmark name."""
    raw = raw.strip()
    if raw.startswith("./"):
        raw = raw[2:]
    # split at /main (first occurrence)
    idx = raw.find("/main")
    if idx >= 0:
        return raw[:idx]
    # fallback: split on whitespace
    return raw.split(maxsplit=1)[0]


def load_all_results() -> dict[str, dict[str, dict]]:
    """Return {system: {benchmark: {mean, stddev, ...}}}."""
    data: dict[str, dict[str, dict]] = defaultdict(dict)
    for csv_path in sorted(BENCH_DIR.glob("*/results.csv")):
        system = csv_path.parent.name
        with open(csv_path) as f:
            reader = csv.DictReader(f)
            for row in reader:
                name = parse_benchmark_name(row["command"])
                data[system][name] = {
                    "mean": float(row["mean"]),
                    "stddev": float(row["stddev"]),
                    "median": float(row["median"]),
                    "min": float(row.get("min", 0)),
                    "max": float(row.get("max", 0)),
                }
    return dict(data)


def benchmark_order(data: dict) -> list[str]:
    """Return all benchmark names in a stable order."""
    names: set[str] = set()
    for v in data.values():
        names.update(v.keys())
    # sort for reproducibility
    return sorted(names)


# ---------------------------------------------------------------------------
# Chart 1 – absolute time grouped bars
# ---------------------------------------------------------------------------
def plot_absolute_bars(data: dict[str, dict[str, dict]]):
    systems = sorted(data.keys())
    benchmarks = benchmark_order(data)

    n_benches = len(benchmarks)
    n_systems = len(systems)
    width = 0.8 / n_systems
    x = np.arange(n_benches)

    fig, ax = plt.subplots(figsize=(max(12, n_benches * 1.6), 6))

    for i, sys_name in enumerate(systems):
        means = [data[sys_name].get(b, {}).get("mean", 0) for b in benchmarks]
        stds  = [data[sys_name].get(b, {}).get("stddev", 0) for b in benchmarks]
        bars = ax.bar(x + i * width, means, width,
                      label=sys_name, color=COLORS.get(sys_name, "#999"),
                      edgecolor="white", linewidth=0.3,
                      yerr=stds, capsize=2, error_kw={"linewidth": 0.8})

    ax.set_ylabel("Execution time (s)")
    ax.set_xticks(x + width * (n_systems - 1) / 2)
    ax.set_xticklabels(benchmarks, rotation=30, ha="right")
    ax.legend(loc="upper left", ncol=min(6, n_systems), frameon=False)
    ax.grid(axis="y", alpha=0.3, linewidth=0.5)
    ax.set_axisbelow(True)
    fig.tight_layout()

    out = OUT_DIR / "absolute_bars.pdf"
    fig.savefig(out)
    fig.savefig(out.with_suffix(".png"))
    plt.close(fig)
    print(f"Saved {out}")


# ---------------------------------------------------------------------------
# Chart 2 – normalised (speedup vs slowest per benchmark)
# ---------------------------------------------------------------------------
def plot_normalised_bars(data: dict[str, dict[str, dict]]):
    systems = sorted(data.keys())
    benchmarks = benchmark_order(data)

    n_benches = len(benchmarks)
    n_systems = len(systems)
    width = 0.8 / n_systems
    x = np.arange(n_benches)

    fig, ax = plt.subplots(figsize=(max(12, n_benches * 1.6), 6))

    for i, sys_name in enumerate(systems):
        vals = []
        for b in benchmarks:
            m = data[sys_name].get(b, {}).get("mean", None)
            if m is None:
                vals.append(0)
                continue
            # slowest across all systems for this benchmark
            slowest = max(
                data[s].get(b, {}).get("mean", 0) for s in systems if b in data[s]
            )
            vals.append(slowest / m if m > 0 else 0)
        ax.bar(x + i * width, vals, width,
               label=sys_name, color=COLORS.get(sys_name, "#999"),
               edgecolor="white", linewidth=0.3)

    ax.axhline(y=1.0, color="gray", linewidth=0.6, linestyle="--", alpha=0.5)
    ax.set_ylabel("Speedup (× over slowest)")
    ax.set_xticks(x + width * (n_systems - 1) / 2)
    ax.set_xticklabels(benchmarks, rotation=30, ha="right")
    ax.legend(loc="upper left", ncol=min(6, n_systems), frameon=False)
    ax.grid(axis="y", alpha=0.3, linewidth=0.5)
    ax.set_axisbelow(True)
    fig.tight_layout()

    out = OUT_DIR / "speedup_bars.pdf"
    fig.savefig(out)
    fig.savefig(out.with_suffix(".png"))
    plt.close(fig)
    print(f"Saved {out}")


# ---------------------------------------------------------------------------
# Chart 3 – line chart (geometric mean by benchmark)
# ---------------------------------------------------------------------------
def plot_line_comparison(data: dict[str, dict[str, dict]]):
    systems = sorted(data.keys())
    benchmarks = benchmark_order(data)

    fig, ax = plt.subplots(figsize=(max(10, len(benchmarks) * 1.2), 5.5))
    x = np.arange(len(benchmarks))

    for sys_name in systems:
        means = [data[sys_name].get(b, {}).get("mean", None) for b in benchmarks]
        stds  = [data[sys_name].get(b, {}).get("stddev", None) for b in benchmarks]
        # replace None with nan so line breaks
        y = np.array([m if m is not None else np.nan for m in means])
        err = np.array([s if s is not None else 0 for s in stds])
        ax.errorbar(x, y, yerr=err, label=sys_name,
                     color=COLORS.get(sys_name),
                     marker="o", markersize=5, linewidth=1.5,
                     capsize=3, capthick=0.8, elinewidth=0.8)

    ax.set_ylabel("Execution time (s)")
    ax.set_xticks(x)
    ax.set_xticklabels(benchmarks, rotation=30, ha="right")
    ax.legend(loc="upper left", ncol=min(6, len(systems)), frameon=False)
    ax.grid(alpha=0.3, linewidth=0.5)
    ax.set_axisbelow(True)
    fig.tight_layout()

    out = OUT_DIR / "line_comparison.pdf"
    fig.savefig(out)
    fig.savefig(out.with_suffix(".png"))
    plt.close(fig)
    print(f"Saved {out}")


# ---------------------------------------------------------------------------
# Chart 4 – coverage matrix (which system implements which benchmark)
# ---------------------------------------------------------------------------
def plot_coverage(data: dict[str, dict[str, dict]]):
    systems = sorted(data.keys())
    benchmarks = benchmark_order(data)

    n_sys = len(systems)
    n_ben = len(benchmarks)
    matrix = np.zeros((n_sys, n_ben), dtype=int)

    for i, sys_name in enumerate(systems):
        for j, b in enumerate(benchmarks):
            if b in data[sys_name]:
                matrix[i, j] = 1

    fig, ax = plt.subplots(figsize=(max(8, n_ben * 0.8), max(3, n_sys * 0.5)))
    cmap = matplotlib.colors.ListedColormap(["#eeeeee", "#648FFF"])
    ax.imshow(matrix, cmap=cmap, aspect="auto", vmin=0, vmax=1)

    ax.set_xticks(range(n_ben))
    ax.set_xticklabels(benchmarks, rotation=45, ha="right")
    ax.set_yticks(range(n_sys))
    ax.set_yticklabels(systems)
    ax.tick_params(top=True, labeltop=True, bottom=False, labelbottom=False)

    for i in range(n_sys):
        for j in range(n_ben):
            if matrix[i, j]:
                ax.text(j, i, "X", ha="center", va="center_baseline", fontsize=12, color="white", fontweight="bold")

    fig.tight_layout()

    out = OUT_DIR / "coverage_matrix.pdf"
    fig.savefig(out)
    fig.savefig(out.with_suffix(".png"))
    plt.close(fig)
    print(f"Saved {out}")


# ---------------------------------------------------------------------------
# Chart 5 – log-scale bar chart (for benchmarks with huge variance)
# ---------------------------------------------------------------------------
def plot_log_bars(data: dict[str, dict[str, dict]]):
    systems = sorted(data.keys())
    benchmarks = benchmark_order(data)

    n_benches = len(benchmarks)
    n_systems = len(systems)
    width = 0.8 / n_systems
    x = np.arange(n_benches)

    fig, ax = plt.subplots(figsize=(max(12, n_benches * 1.6), 6))

    for i, sys_name in enumerate(systems):
        means = [data[sys_name].get(b, {}).get("mean", 1e-9) for b in benchmarks]
        ax.bar(x + i * width, means, width,
               label=sys_name, color=COLORS.get(sys_name, "#999"),
               edgecolor="white", linewidth=0.3)

    ax.set_yscale("log")
    ax.set_ylabel("Execution time (s, log scale)")
    ax.set_xticks(x + width * (n_systems - 1) / 2)
    ax.set_xticklabels(benchmarks, rotation=30, ha="right")
    ax.legend(loc="upper left", ncol=min(6, n_systems), frameon=False)
    ax.grid(axis="y", alpha=0.3, linewidth=0.5)
    ax.set_axisbelow(True)
    fig.tight_layout()

    out = OUT_DIR / "log_bars.pdf"
    fig.savefig(out)
    fig.savefig(out.with_suffix(".png"))
    plt.close(fig)
    print(f"Saved {out}")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------
def main() -> int:
    OUT_DIR.mkdir(parents=True, exist_ok=True)
    data = load_all_results()

    if not data:
        print("No results.csv files found in benchmarks/*/", file=sys.stderr)
        return 1

    print(f"Found {len(data)} systems: {', '.join(sorted(data.keys()))}")
    all_benches = benchmark_order(data)
    print(f"Found {len(all_benches)} benchmarks")
    print()

    plot_absolute_bars(data)
    plot_normalised_bars(data)
    plot_line_comparison(data)
    plot_coverage(data)
    plot_log_bars(data)

    print("\nDone. Charts saved to", OUT_DIR)
    return 0


if __name__ == "__main__":
    sys.exit(main())
