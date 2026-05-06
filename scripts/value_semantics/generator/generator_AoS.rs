// RUN: %minirustc %s --new -emit=exe -o %t.exe && %t.exe | %FileCheck %s
// CHECK: 67108837

use std::env::Alloc;
use std::env::Console;
use std::vec::Vec;
use std::alloca::{ArenaAlloc, SlabAlloc};

type NodeH = i32;

struct Node {
    left: NodeH,
    value: i32,
    right: NodeH,
}

effect TreeArena {
    node(left: NodeH, value: i32, right: NodeH) -> NodeH can Alloc,
    left(idx: NodeH) -> NodeH,
    value(idx: NodeH) -> i32,
    right(idx: NodeH) -> NodeH,
}

effect Yield {
    yield(value: i32) -> (),
}

fn make(n: i32) -> NodeH can TreeArena, Alloc {
    if n == 0 {
        0
    } else {
        let t = make(n - 1);
        do TreeArena::node(t, n, t)
    }
}

fn iterate(t: NodeH) -> () can TreeArena, Yield, Alloc {
    if t == 0 {
        ()
    } else {
        let l = do TreeArena::left(t);
        let v = do TreeArena::value(t);
        let r = do TreeArena::right(t);
        iterate(l);
        do Yield::yield(v);
        iterate(r)
    }
}

fn sumGenerated(root: NodeH) -> i32 can TreeArena, Alloc {
    let mut acc = 0;
    handle using Yield {
        iterate(root);
    } with {
        yield(v) => |k| {
            acc += v;
            k()
        }
    };
    acc
}

fn run(n: i32) -> i32 can Alloc {
    let mut nodes: Vec<Node> = Vec::with_capacity((n + 1) as u64);
    nodes.push(Node { left: 0, value: 0, right: 0 });

    handle using TreeArena {
        let root = make(n);
        sumGenerated(root)
    } with {
        node(l, v, r) => |k| {
            nodes.push(Node { left: l, value: v, right: r });
            k((nodes.len() as i32) - 1)
        },
        left(idx) => |k| {
            k(nodes[idx].left)
        },
        value(idx) => |k| {
            k(nodes[idx].value)
        },
        right(idx) => |k| {
            k(nodes[idx].right)
        }
    }
}

fn main() {
    let n = 25;
    let r = handle using SlabAlloc::default() {
        run(n)
    };
    handle using Console::default() {
        do Console::println("{}", r);
    }
}
