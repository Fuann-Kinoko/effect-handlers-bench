#!/bin/bash
# Run a small scaling sweep and generate paper-style plots.
#
# Usage:
#   bash run_scaling.sh [seed]
#
# Override sizes with environment variables:
#   V_SIZES="1000 2000 4000 8000"
#   N_SIZES="100000 500000 1000000 2000000"

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
SEED="${1:-42}"
V_SIZES=(${V_SIZES:-1000 2000 4000 8000})
N_SIZES=(${N_SIZES:-100000 500000 1000000 2000000})

if [ "${#V_SIZES[@]}" -ne "${#N_SIZES[@]}" ]; then
    echo "V_SIZES and N_SIZES must contain the same number of entries" >&2
    exit 1
fi

mkdir -p "$SCRIPT_DIR/scaling"

for i in "${!V_SIZES[@]}"; do
    V="${V_SIZES[$i]}"
    N="${N_SIZES[$i]}"
    echo "=== Scaling run V=$V N=$N seed=$SEED ==="
    bash "$SCRIPT_DIR/run_cmp.sh" "$V" "$N" "$SEED"
    cp "$SCRIPT_DIR/results.csv" "$SCRIPT_DIR/scaling/results_V${V}_N${N}.csv"
done

python3 "$SCRIPT_DIR/plot_value_semantics.py"
