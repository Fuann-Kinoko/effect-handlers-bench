// WebGraph - Value (index-based, CSR)
// minirustc version of efficient_val.cc. It avoids nested Vecs by building CSR
// in two deterministic LCG passes.

use std::env::Alloc;
use std::env::Console;
use std::vec::Vec;

const INT_MAX: i32 = 2147483647;
const U64_MAX: u64 = 18446744073709551615;

fn lcg_next(state: u64) -> u64 {
    state * 6364136223846793005 + 1442695040888963407
}

struct WebGraph {
    V: i32,
    head: Vec<i32>,
    to: Vec<i32>,
}

fn build_graph(V: i32, seed: u64) -> WebGraph can Alloc {
    let mut counts: Vec<i32> = Vec::with_capacity(V as u64);
    let mut i: i32 = 0;
    while i < V {
        counts.push(0);
        i = i + 1;
    };

    let mut rng: u64 = seed;
    i = 0;
    while i < V {
        let mut f: u64 = U64_MAX;
        let mut keep_going: i32 = 1;
        while keep_going != 0 {
            rng = lcg_next(rng);
            if rng < f {
                rng = lcg_next(rng);
                let j: i32 = (rng % (V as u64)) as i32;
                if i != j {
                    let old_count: i32 = counts[i];
                    counts[i] = old_count + 1;
                };
                f = f / 2;
            } else {
                keep_going = 0;
            };
        };
        i = i + 1;
    };

    let mut head: Vec<i32> = Vec::with_capacity((V + 1) as u64);
    let mut total: i32 = 0;
    i = 0;
    while i < V {
        head.push(total);
        let count: i32 = counts[i];
        total = total + count;
        i = i + 1;
    };
    head.push(total);

    let mut to: Vec<i32> = Vec::with_capacity(total as u64);
    let mut e: i32 = 0;
    while e < total {
        to.push(0);
        e = e + 1;
    };

    let mut cursor: Vec<i32> = Vec::with_capacity(V as u64);
    i = 0;
    while i < V {
        let h: i32 = head[i];
        cursor.push(h);
        i = i + 1;
    };

    rng = seed;
    i = 0;
    while i < V {
        let mut f: u64 = U64_MAX;
        let mut keep_going: i32 = 1;
        while keep_going != 0 {
            rng = lcg_next(rng);
            if rng < f {
                rng = lcg_next(rng);
                let j: i32 = (rng % (V as u64)) as i32;
                if i != j {
                    let pos: i32 = cursor[i];
                    to[pos] = j;
                    cursor[i] = pos + 1;
                };
                f = f / 2;
            } else {
                keep_going = 0;
            };
        };
        i = i + 1;
    };

    WebGraph { V: V, head: head, to: to }
}

fn min_i32(a: i32, b: i32) -> i32 {
    if a < b { a } else { b }
}

fn tarjan(g: WebGraph) -> i32 can Alloc {
    let V = g.V;
    let mut index: Vec<i32> = Vec::with_capacity(V as u64);
    let mut lowlink: Vec<i32> = Vec::with_capacity(V as u64);
    let mut on_stack: Vec<i32> = Vec::with_capacity(V as u64);
    let mut stack: Vec<i32> = Vec::with_capacity(V as u64);
    let mut work_vertex: Vec<i32> = Vec::with_capacity(V as u64);
    let mut work_edge: Vec<i32> = Vec::with_capacity(V as u64);
    let mut work_from_start: Vec<i32> = Vec::with_capacity(V as u64);

    let mut i: i32 = 0;
    while i < V {
        index.push(-1);
        lowlink.push(-1);
        on_stack.push(0);
        stack.push(0);
        work_vertex.push(0);
        work_edge.push(0);
        work_from_start.push(0);
        i = i + 1;
    };

    let mut comp_count: i32 = 0;
    let mut start: i32 = 0;
    while start < V {
        if index.get(start) == -1 {
            let mut next_idx: i32 = 0;
            let mut stack_len: i32 = 0;
            let mut work_len: i32 = 1;
            work_vertex[0] = start;
            work_edge[0] = g.head.get(start);
            work_from_start[0] = 1;

            while work_len > 0 {
                let top_idx = work_len - 1;
                let v: i32 = work_vertex.get(top_idx);
                if work_from_start.get(top_idx) != 0 {
                    index[v] = next_idx;
                    lowlink[v] = next_idx;
                    next_idx = next_idx + 1;
                    stack[stack_len] = v;
                    stack_len = stack_len + 1;
                    on_stack[v] = 1;
                    work_from_start[top_idx] = 0;
                };

                let mut pushed_child: i32 = 0;
                let end = g.head.get(v + 1);
                while work_edge.get(top_idx) < end {
                    let edge_idx: i32 = work_edge.get(top_idx);
                    let w: i32 = g.to.get(edge_idx);
                    work_edge[top_idx] = edge_idx + 1;
                    if index.get(w) == -1 {
                        work_vertex[work_len] = w;
                        work_edge[work_len] = g.head.get(w);
                        work_from_start[work_len] = 1;
                        work_len = work_len + 1;
                        pushed_child = 1;
                        break;
                    } else {
                        if on_stack.get(w) != 0 {
                            lowlink[v] = min_i32(lowlink.get(v), index.get(w));
                        };
                    };
                };

                if pushed_child == 0 {
                    if lowlink.get(v) == index.get(v) {
                        comp_count = comp_count + 1;
                        let mut done: i32 = 0;
                        while done == 0 {
                            stack_len = stack_len - 1;
                            let w: i32 = stack.get(stack_len);
                            on_stack[w] = 0;
                            if w == v {
                                done = 1;
                            };
                        };
                    };
                    work_len = work_len - 1;
                    if work_len > 0 {
                        let u: i32 = work_vertex.get(work_len - 1);
                        lowlink[u] = min_i32(lowlink.get(u), lowlink.get(v));
                    };
                };
            };
        };
        start = start + 1;
    };
    comp_count
}

fn dijkstra(g: WebGraph, source: i32) -> i32 can Alloc {
    let V = g.V;
    let mut dist: Vec<i32> = Vec::with_capacity(V as u64);
    let mut visited: Vec<i32> = Vec::with_capacity(V as u64);
    let mut unvisited: Vec<i32> = Vec::with_capacity(V as u64);

    let mut i: i32 = 0;
    while i < V {
        dist.push(INT_MAX);
        visited.push(0);
        unvisited.push(i);
        i = i + 1;
    };
    dist[source] = 0;

    let mut remaining: i32 = V;
    while remaining > 0 {
        let mut best_idx: i32 = 0;
        let mut best_dist: i32 = INT_MAX;
        i = 0;
        while i < remaining {
            let vi: i32 = unvisited.get(i);
            if dist.get(vi) < best_dist {
                best_dist = dist.get(vi);
                best_idx = i;
            };
            i = i + 1;
        };

        let v: i32 = unvisited.get(best_idx);
        if dist.get(v) == INT_MAX {
            remaining = 0;
        } else {
            remaining = remaining - 1;
            unvisited[best_idx] = unvisited.get(remaining);
            visited[v] = 1;

            let mut edge: i32 = g.head.get(v);
            let end = g.head.get(v + 1);
            while edge < end {
                let w: i32 = g.to.get(edge);
                if visited.get(w) == 0 {
                    let nd = dist.get(v) + 1;
                    if nd < dist.get(w) {
                        dist[w] = nd;
                    };
                };
                edge = edge + 1;
            };
        };
    };

    let mut reachable: i32 = 0;
    i = 0;
    while i < V {
        if dist.get(i) != INT_MAX {
            reachable = reachable + 1;
        };
        i = i + 1;
    };
    reachable
}

fn main() {
    let V: i32 = 5000;
    let seed: u64 = 42;

    let b = handle using Alloc::default() {
        let g = build_graph(V, seed);
        g.to.len() as i32
    };
    handle using Console::default() {
        do Console::println("webgraph_build={}", b);
    };

    let t = handle using Alloc::default() {
        let g = build_graph(V, seed);
        tarjan(g)
    };
    handle using Console::default() {
        do Console::println("webgraph_tarjan={}", t);
    };

    let d = handle using Alloc::default() {
        let g = build_graph(V, seed);
        dijkstra(g, 0)
    };
    handle using Console::default() {
        do Console::println("webgraph_dijkstra={}", d);
    };
}
