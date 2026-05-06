// Doubly-linked list - Value (index-based, SoA parallel arrays)
// This intentionally keeps the same value/index semantics as efficient_val.cc,
// but uses a different memory layout from its Vec<Node> AoS representation.

use std::env::Alloc;
use std::env::Console;
use std::vec::Vec;

const NONE: i32 = 2147483647;

fn lcg_next(state: u64) -> u64 {
    state * 6364136223846793005 + 1442695040888963407
}

struct DList {
    head: i32,
    preds: Vec<i32>,
    succs: Vec<i32>,
    values: Vec<i32>,
}

fn build_list(N: i32) -> DList can Alloc {
    let mut preds: Vec<i32> = Vec::with_capacity(N as u64);
    let mut succs: Vec<i32> = Vec::with_capacity(N as u64);
    let mut values: Vec<i32> = Vec::with_capacity(N as u64);
    let mut head: i32 = NONE;
    let mut i: i32 = 0;
    while i < N {
        let pred: i32 = if i == 0 { NONE } else { i - 1 };
        let succ: i32 = if i == N - 1 { NONE } else { i + 1 };
        preds.push(pred);
        succs.push(succ);
        values.push(i);
        if i == 0 {
            head = i;
        };
        i = i + 1;
    };
    DList { head: head, preds: preds, succs: succs, values: values }
}

fn do_append(N: i32) -> i32 can Alloc {
    let _dl = build_list(N);
    0
}

fn do_traverse(N: i32) -> u64 can Alloc {
    let dl = build_list(N);
    let mut sum: u64 = 0;
    let mut cur: i32 = dl.head;
    while cur != NONE {
        sum = sum + (dl.values[cur] as u64);
        cur = dl.succs[cur];
    };
    sum
}

fn shuffled_indices(N: i32, seed: u64) -> Vec<i32> can Alloc {
    let mut addrs: Vec<i32> = Vec::with_capacity(N as u64);
    let mut i: i32 = 0;
    while i < N {
        addrs.push(i);
        i = i + 1;
    };

    let mut rng: u64 = seed;
    let mut k: i32 = N - 1;
    while k > 0 {
        rng = lcg_next(rng);
        let j: i32 = (rng as i32) % (k + 1);
        let jj: i32 = if j < 0 { j + (k + 1) } else { j };
        let tmp: i32 = addrs[k];
        addrs[k] = addrs[jj];
        addrs[jj] = tmp;
        k = k - 1;
    };
    addrs
}

fn do_remove_all(N: i32, seed: u64) -> i32 can Alloc {
    let mut dl = build_list(N);
    let addrs = shuffled_indices(N, seed);

    let mut m: i32 = 0;
    while m < N {
        let a: i32 = addrs[m];
        let p: i32 = dl.preds[a];
        let s: i32 = dl.succs[a];
        if p != NONE {
            dl.succs[p] = s;
        } else {
            dl.head = s;
        };
        if s != NONE {
            dl.preds[s] = p;
        } else {
        };
        m = m + 1;
    };
    0
}

fn do_remove_half_traverse(N: i32, seed: u64) -> u64 can Alloc {
    let mut dl = build_list(N);
    let addrs = shuffled_indices(N, seed);

    let half: i32 = N / 2;
    let mut m: i32 = 0;
    while m < half {
        let a: i32 = addrs[m];
        let p: i32 = dl.preds[a];
        let s: i32 = dl.succs[a];
        if p != NONE {
            dl.succs[p] = s;
        } else {
            dl.head = s;
        };
        if s != NONE {
            dl.preds[s] = p;
        } else {
        };
        m = m + 1;
    };

    let mut sum: u64 = 0;
    let mut cur: i32 = dl.head;
    while cur != NONE {
        sum = sum + (dl.values[cur] as u64);
        cur = dl.succs[cur];
    };
    sum
}

fn main() {
    let N: i32 = 500000;
    let seed: u64 = 42;

    let a = handle using Alloc::default() {
        do_append(N)
    };
    handle using Console::default() {
        do Console::println("dlist_append={}", a);
    };

    let t = handle using Alloc::default() {
        do_traverse(N)
    };
    handle using Console::default() {
        do Console::println("dlist_traverse={}", t);
    };

    let r = handle using Alloc::default() {
        do_remove_all(N, seed)
    };
    handle using Console::default() {
        do Console::println("dlist_remove_all={}", r);
    };

    let h = handle using Alloc::default() {
        do_remove_half_traverse(N, seed)
    };
    handle using Console::default() {
        do Console::println("dlist_remove_half_traverse={}", h);
    };
}
