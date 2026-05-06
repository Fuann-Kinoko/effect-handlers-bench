#!/bin/bash
# Benchmark: value semantics (index) vs reference semantics (pointer).
# WebGraph includes C++ pointer/value variants plus minirustc CSR value variant.
# DList includes C++ AoS/SoA and minirustc AoS/SoA value-layout variants.
#
# Usage: bash run_cmp.sh [V] [N] [seed]

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
V="${1:-8000}"
N="${2:-2000000}"
SEED="${3:-42}"

MINIRUSTC="${MINIRUSTC_BIN:-$HOME/minirustc/build/minirustc}"
MINIRUSTC_STD="${MINIRUSTC_STD:-$HOME/minirustc/std}"
LIBUV_ROOT="${MINIRUSTC_LIBUV_ROOT:-$HOME/libuv/build}"
export LD_LIBRARY_PATH="${LIBUV_ROOT}/lib:${LD_LIBRARY_PATH:-}"

echo "=== Compiling (V=$V, N=$N, seed=$SEED) ==="

pids=()
for opt in O0 O1 O2 O3; do
    for v in naive_ref efficient_val; do
        g++ -std=c++17 "-${opt}" "$SCRIPT_DIR/webgraph/${v}.cc" -o "$SCRIPT_DIR/webgraph/${v}_${opt}" &
        pids+=("$!")
    done
    g++ -std=c++17 "-${opt}" "$SCRIPT_DIR/dlist/naive_ref.cc"         -o "$SCRIPT_DIR/dlist/naive_ref_${opt}" &
    pids+=("$!")
    g++ -std=c++17 "-${opt}" "$SCRIPT_DIR/dlist/efficient_val.cc"     -o "$SCRIPT_DIR/dlist/efficient_val_aos_${opt}" &
    pids+=("$!")
    g++ -std=c++17 "-${opt}" "$SCRIPT_DIR/dlist/efficient_val_soa.cc" -o "$SCRIPT_DIR/dlist/efficient_val_soa_${opt}" &
    pids+=("$!")
done
for pid in "${pids[@]}"; do
    wait "$pid"
done

compile_mrc_webgraph() {
    local src="$1"
    local out="$2"
    local mode="$3"
    local patched="$SCRIPT_DIR/webgraph/.tmp_$(basename "$out").rs"

    awk '/^fn main\(\)/ { exit } { print }' "$src" > "$patched"
    cat >> "$patched" <<EOF
fn main() {
    let V: i32 = ${V};
    let seed: u64 = ${SEED};

    let r = handle using Alloc::default() {
EOF
    case "$mode" in
        build)
            echo "        let g = build_graph(V, seed);" >> "$patched"
            echo "        g.to.len() as i32" >> "$patched"
            ;;
        tarjan)
            echo "        let g = build_graph(V, seed);" >> "$patched"
            echo "        tarjan(g)" >> "$patched"
            ;;
        dijkstra)
            echo "        let g = build_graph(V, seed);" >> "$patched"
            echo "        dijkstra(g, 0)" >> "$patched"
            ;;
        *)
            echo "unknown webgraph mode: $mode" >&2
            exit 1
            ;;
    esac
    cat >> "$patched" <<EOF
    };
    handle using Console::default() {
        do Console::println("{}", r);
    };
}
EOF

    "$MINIRUSTC" "$patched" \
        --include-std="$MINIRUSTC_STD" \
        -O -emit=exe \
        -o "$out"
    rm -f "$patched"
}

compile_mrc_dlist() {
    local src="$1"
    local out="$2"
    local mode="$3"
    local patched="$SCRIPT_DIR/dlist/.tmp_$(basename "$out").rs"

    awk '/^fn main\(\)/ { exit } { print }' "$src" > "$patched"
    cat >> "$patched" <<EOF
fn main() {
    let N: i32 = ${N};
    let seed: u64 = ${SEED};

    let r = handle using Alloc::default() {
EOF
    case "$mode" in
        append)
            echo "        do_append(N)" >> "$patched"
            ;;
        traverse)
            echo "        do_traverse(N)" >> "$patched"
            ;;
        remove_all)
            echo "        do_remove_all(N, seed)" >> "$patched"
            ;;
        remove_half_traverse)
            echo "        do_remove_half_traverse(N, seed)" >> "$patched"
            ;;
        *)
            echo "unknown dlist mode: $mode" >&2
            exit 1
            ;;
    esac
    cat >> "$patched" <<EOF
    };
    handle using Console::default() {
        do Console::println("{}", r);
    };
}
EOF

    "$MINIRUSTC" "$patched" \
        --include-std="$MINIRUSTC_STD" \
        -O -emit=exe \
        -o "$out"
	    rm -f "$patched"
}

echo "=== Compiling minirustc webgraph ==="
pids=()
for mode in build tarjan dijkstra; do
    compile_mrc_webgraph "$SCRIPT_DIR/webgraph/efficient_val.rs" \
        "$SCRIPT_DIR/webgraph/efficient_val_minirustc_${mode}" "$mode" &
    pids+=("$!")
done
for pid in "${pids[@]}"; do
    wait "$pid"
done

echo "=== Compiling minirustc dlist ==="
pids=()
for mode in append traverse remove_all remove_half_traverse; do
    compile_mrc_dlist "$SCRIPT_DIR/dlist/efficient_val.rs" \
        "$SCRIPT_DIR/dlist/efficient_val_soa_minirustc_${mode}" "$mode" &
    pids+=("$!")
    compile_mrc_dlist "$SCRIPT_DIR/dlist/efficient_val_aos.rs" \
        "$SCRIPT_DIR/dlist/efficient_val_aos_minirustc_${mode}" "$mode" &
    pids+=("$!")
done
for pid in "${pids[@]}"; do
    wait "$pid"
done

echo "=== Benchmarking ==="

BENCHES=()
push_bench() { BENCHES+=("-n" "$1" "$2"); }

for opt in O0 O1 O2 O3; do
    for mode in build tarjan dijkstra; do
        push_bench "webgraph_${mode}_naive_${opt}"     "$SCRIPT_DIR/webgraph/naive_ref_${opt} $mode $V $SEED"
        push_bench "webgraph_${mode}_efficient_${opt}" "$SCRIPT_DIR/webgraph/efficient_val_${opt} $mode $V $SEED"
    done
    for mode in append traverse remove_all remove_half_traverse; do
        push_bench "dlist_${mode}_naive_${opt}"     "$SCRIPT_DIR/dlist/naive_ref_${opt} $mode $N $SEED"
        push_bench "dlist_${mode}_cpp_aos_${opt}"   "$SCRIPT_DIR/dlist/efficient_val_aos_${opt} $mode $N $SEED"
        push_bench "dlist_${mode}_cpp_soa_${opt}"   "$SCRIPT_DIR/dlist/efficient_val_soa_${opt} $mode $N $SEED"
    done
done

for mode in append traverse remove_all remove_half_traverse; do
    push_bench "dlist_${mode}_minirustc_aos" "$SCRIPT_DIR/dlist/efficient_val_aos_minirustc_${mode}"
    push_bench "dlist_${mode}_minirustc_soa" "$SCRIPT_DIR/dlist/efficient_val_soa_minirustc_${mode}"
done

for mode in build tarjan dijkstra; do
    push_bench "webgraph_${mode}_minirustc" "$SCRIPT_DIR/webgraph/efficient_val_minirustc_${mode}"
done

hyperfine --warmup 3 --shell=none --export-csv "$SCRIPT_DIR/results.csv" \
    "${BENCHES[@]}"

echo ""
echo "=== Results ==="
python3 -c "
import csv, collections

rows = list(csv.DictReader(open('$SCRIPT_DIR/results.csv')))
data = {}
for r in rows:
    data[r['command']] = float(r['mean'])

for opt in ['O0','O1','O2','O3']:
    print(f'\n--- WebGraph {opt} ---')
    print(f'{\"Benchmark\":<30} {\"naive (ptr)\":>14} {\"efficient (idx)\":>14} {\"speedup\":>8}')
    print('-' * 68)
    for mode in ['build','tarjan','dijkstra']:
        nk = f'webgraph_{mode}_naive_{opt}'
        ek = f'webgraph_{mode}_efficient_{opt}'
        if nk in data and ek in data:
            sp = data[nk] / data[ek] if data[ek] > 0 else float('inf')
            print(f'webgraph/{mode:<18} {data[nk]:>12.4f}s {data[ek]:>12.4f}s {sp:>7.1f}x')

print('\n--- WebGraph minirustc (-O) ---')
print(f'{\"Benchmark\":<28} {\"time\":>12} {\"vs C++ O3 val\":>14}')
print('-' * 58)
for mode in ['build','tarjan','dijkstra']:
    mk = f'webgraph_{mode}_minirustc'
    ck = f'webgraph_{mode}_efficient_O3'
    if mk in data:
        ratio = data[mk] / data[ck] if ck in data and data[ck] > 0 else float('inf')
        print(f'{mode:<28} {data[mk]:>10.4f}s {ratio:>13.2f}x')

for opt in ['O0','O1','O2','O3']:
    print(f'\n--- DList C++ {opt} ---')
    print(f'{\"Benchmark\":<28} {\"naive ptr\":>12} {\"val AoS\":>12} {\"val SoA\":>12}')
    print('-' * 68)
    for mode in ['append','traverse','remove_all','remove_half_traverse']:
        nk = f'dlist_{mode}_naive_{opt}'
        ak = f'dlist_{mode}_cpp_aos_{opt}'
        sk = f'dlist_{mode}_cpp_soa_{opt}'
        if nk in data and ak in data and sk in data:
            print(f'{mode:<28} {data[nk]:>10.4f}s {data[ak]:>10.4f}s {data[sk]:>10.4f}s')

print('\n--- DList minirustc (-O) ---')
print(f'{\"Benchmark\":<28} {\"AoS\":>12} {\"SoA\":>12} {\"SoA/AoS\":>10}')
print('-' * 68)
for mode in ['append','traverse','remove_all','remove_half_traverse']:
    ak = f'dlist_{mode}_minirustc_aos'
    sk = f'dlist_{mode}_minirustc_soa'
    if ak in data and sk in data:
        ratio = data[sk] / data[ak] if data[ak] > 0 else float('inf')
        print(f'{mode:<28} {data[ak]:>10.4f}s {data[sk]:>10.4f}s {ratio:>9.2f}x')
"
