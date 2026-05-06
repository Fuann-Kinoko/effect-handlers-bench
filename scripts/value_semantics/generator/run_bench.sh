#!/bin/bash
# Generator benchmark: minirustc vs Rust (box/arena) vs C++ (arena/ptr)
# Compares at multiple opt levels.
#
# Usage: bash run_bench.sh [n]

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
N="${1:-25}"

MINIRUSTC="${MINIRUSTC_BIN:-$HOME/minirustc/build/minirustc}"
MINIRUSTC_STD="${MINIRUSTC_STD:-$HOME/minirustc/std}"
LIBUV_ROOT="${MINIRUSTC_LIBUV_ROOT:-$HOME/libuv/build}"

# ---- compile minirustc (fresh every time) ----
echo "=== Compiling minirustc (n=${N}) ==="
sed "s/let n = [0-9]*;/let n = ${N};/" "$SCRIPT_DIR/generator.rs" > "$SCRIPT_DIR/generator_patched.rs"
sed "s/let n = [0-9]*;/let n = ${N};/" "$SCRIPT_DIR/generator_AoS.rs" > "$SCRIPT_DIR/generator_AoS_patched.rs"

export LD_LIBRARY_PATH="${LIBUV_ROOT}/lib:${LD_LIBRARY_PATH:-}"
"$MINIRUSTC" "$SCRIPT_DIR/generator_patched.rs" \
    --include-std="$MINIRUSTC_STD" \
    -O -emit=exe \
    -o "$SCRIPT_DIR/generator_minirustc"
"$MINIRUSTC" "$SCRIPT_DIR/generator_AoS_patched.rs" \
    --include-std="$MINIRUSTC_STD" \
    -O -emit=exe \
    -o "$SCRIPT_DIR/generator_minirustc_AoS"

rm -f "$SCRIPT_DIR/generator_patched.rs"
rm -f "$SCRIPT_DIR/generator_AoS_patched.rs"

# ---- compile C++ at all opt levels ----
echo "=== Compiling C++ ==="
for opt in O0 O1 O2 O3; do
    g++ -std=c++17 "-${opt}" "$SCRIPT_DIR/generator_arena.cc" -o "$SCRIPT_DIR/generator_arena_${opt}" &
    g++ -std=c++17 "-${opt}" "$SCRIPT_DIR/generator_ptr.cc"  -o "$SCRIPT_DIR/generator_ptr_${opt}" &
done
wait

# ---- compile Rust ----
echo "=== Compiling Rust ==="
rustc -C opt-level=3 "$SCRIPT_DIR/generator_box.rs"  -o "$SCRIPT_DIR/generator_box" &
rustc -C opt-level=3 "$SCRIPT_DIR/generator_arena_rs.rs" -o "$SCRIPT_DIR/generator_arena_rs" &
wait

# ---- hyperfine ----
echo "=== Benchmarking ==="

BENCHES=(
    "-n" "minirustc"         "$SCRIPT_DIR/generator_minirustc"
    "-n" "minirustc_AoS"     "$SCRIPT_DIR/generator_minirustc_AoS"
    "-n" "rust_box"          "$SCRIPT_DIR/generator_box $N"
    "-n" "rust_arena"        "$SCRIPT_DIR/generator_arena_rs $N"
)
for opt in O0 O1 O2 O3; do
    BENCHES+=( "-n" "cpp_arena_${opt}"  "$SCRIPT_DIR/generator_arena_${opt} $N" )
    BENCHES+=( "-n" "cpp_ptr_${opt}"    "$SCRIPT_DIR/generator_ptr_${opt} $N" )
done

hyperfine --warmup 3 --shell=none --export-csv "$SCRIPT_DIR/results.csv" \
    "${BENCHES[@]}"

echo ""
echo "=== Results ==="
python3 -c "
import csv

rows = list(csv.DictReader(open('$SCRIPT_DIR/results.csv')))
data = {}
for r in rows:
    data[r['command']] = float(r['mean'])

print(f'{\"version\":<20} {\"time\":>12} {\"vs best\":>10}')
print('-' * 42)
best = min(data.values())
order = ['minirustc', 'minirustc_AoS', 'rust_box', 'rust_arena'] + \
        [f'cpp_arena_{o}' for o in ['O0','O1','O2','O3']] + \
        [f'cpp_ptr_{o}' for o in ['O0','O1','O2','O3']]
for name in order:
    if name in data:
        ratio = data[name] / best if best > 0 else 0
        print(f'{name:<20} {data[name]:>10.4f}s {ratio:>9.1f}x')
"
echo ""
cat "$SCRIPT_DIR/results.csv"
