// generator_box.rs — Rust Box-based (heap-allocated, pointer-chasing)
// Each node is a Box<Node> on the heap, left/right are raw pointers.
// Matches generator_ptr.cc approach.
//
// Compile: rustc -O generator_box.rs -o generator_box

use std::env;
use std::process;

struct Node {
    left: *const Node,
    right: *const Node,
    value: i32,
}

fn make(n: i32) -> *const Node {
    if n == 0 {
        return std::ptr::null();
    }
    let t = make(n - 1);
    let node = Box::into_raw(Box::new(Node {
        left: t,
        right: t,
        value: n,
    }));
    node
}

fn iterate(t: *const Node, acc: &mut i32) {
    if t.is_null() {
        return;
    }
    unsafe {
        iterate((*t).left, acc);
        *acc += (*t).value;
        iterate((*t).right, acc);
    }
}

fn main() {
    let n: i32 = env::args().nth(1).and_then(|a| a.parse().ok()).unwrap_or(25);
    let root = make(n);
    let mut acc = 0;
    iterate(root, &mut acc);
    println!("{}", acc);
    // intentional leak — shared DAG nodes
    process::exit(0);
}
