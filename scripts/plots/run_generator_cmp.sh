#!/usr/bin/env bash
# run_generator_cmp.sh — compare generator benchmark across C++ (arena/ptr) and minirustc
#
# Usage: bash scripts/plots/run_generator_cmp.sh [N]
#   N  — tree depth (default 25, same as minirustc benchmark)
#
# Outputs a comparison table to stdout and saves a CSV to scripts/plots/generator_cmp.csv

set -euo pipefail

N="${1:-25}"
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
MINIRUSTC_EXE="$HOME/minirustc/build/minirustc"
MINIRUSTC_SRC="$HOME/minirustc/test/complex/sort/generator.rs"
OUT_CSV="$SCRIPT_DIR/generator_cmp.csv"
echo "=== Generator Benchmark Comparison (n=$N) ==="
echo ""

# Build minirustc binary if not already
MINIRUSTC_BIN="/tmp/generator_minirustc_$N"
echo "[minirustc] compiling..."
"$MINIRUSTC_EXE" "$MINIRUSTC_SRC" --include-std="$HOME/minirustc/std" -O -emit=exe -o "$MINIRUSTC_BIN" 2>&1 | tail -1

# Helper: compile, verify, and time a C++ binary
run_cpp() {
    local label="$1"
    local src="$2"
    local opt="$3"
    local bin="/tmp/generator_${label}_${opt}_$N"

    echo "[${label}] compiling with ${opt}..."
    g++ -std=c++17 "${opt}" -o "$bin" "$src"

    local output
    output="$("$bin" "$N" 2>&1)"
    local result
    result=$(echo "$output" | head -1)
    local t
    t=$(echo "$output" | grep "time:" | awk '{print $2}')

    if [ -z "$result" ]; then
        echo "  ERROR: no output"
        return
    fi
    echo "  ${label} ${opt}: ${t}s"
    echo "${label},${opt},${t}" >> "$OUT_CSV"
}

# Run minirustc
echo "[minirustc] running..."
MR_OUTPUT="$("$MINIRUSTC_BIN" 2>&1)"
MR_RESULT=$(echo "$MR_OUTPUT" | head -1)
if [ -z "$MR_RESULT" ]; then
    echo "  ERROR: no output"
else
    # Use /usr/bin/time for wall-clock
    MR_TIME=$( { /usr/bin/time -f '%e' "$MINIRUSTC_BIN" > /dev/null; } 2>&1 )
    echo "  minirustc -O: ${MR_TIME}s"
    echo "minirustc,-O,${MR_TIME}" > "$OUT_CSV"
fi

echo ""

# Compile and run C++ versions at each opt level
for src_label in "arena:${SCRIPT_DIR}/generator_arena.cc" "ptr:${SCRIPT_DIR}/generator_ptr.cc"; do
    label="${src_label%%:*}"
    src="${src_label##*:}"
    for opt in -O0 -O1 -O2 -O3; do
        run_cpp "$label" "$src" "$opt"
    done
    echo ""
done

echo "Results saved to $OUT_CSV"

# Quick summary
echo ""
echo "=== Summary (seconds, lower is better) ==="
printf "%-18s %8s\n" "Version" "Time(s)"
printf "%-18s %8s\n" "------------------" "--------"
sort -t',' -k3 -n "$OUT_CSV" | while IFS=',' read -r label opt t; do
    printf "%-18s %8s\n" "${label} ${opt}" "$t"
done
