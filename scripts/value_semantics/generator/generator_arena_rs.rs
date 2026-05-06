// generator_arena_rs.rs — Rust arena-based (contiguous vectors, index-based)
// All nodes stored in Vecs, links via integer indices.
// Matches generator_arena.cc approach.
//
// Compile: rustc -O generator_arena_rs.rs -o generator_arena_rs

use std::env;

struct Arena {
    lefts: Vec<i32>,
    rights: Vec<i32>,
    values: Vec<i32>,
}

impl Arena {
    fn new() -> Self {
        let mut a = Arena {
            lefts: Vec::with_capacity(64),
            rights: Vec::with_capacity(64),
            values: Vec::with_capacity(64),
        };
        // sentinel at index 0
        a.lefts.push(0);
        a.rights.push(0);
        a.values.push(0);
        a
    }

    fn node(&mut self, l: i32, v: i32, r: i32) -> i32 {
        self.lefts.push(l);
        self.values.push(v);
        self.rights.push(r);
        (self.lefts.len() - 1) as i32
    }

    fn left(&self, idx: i32) -> i32   { self.lefts[idx as usize] }
    fn right(&self, idx: i32) -> i32  { self.rights[idx as usize] }
    fn value(&self, idx: i32) -> i32  { self.values[idx as usize] }
}

fn make(n: i32, a: &mut Arena) -> i32 {
    if n == 0 { return 0; }
    let t = make(n - 1, a);
    a.node(t, n, t)
}

fn iterate(t: i32, a: &Arena, acc: &mut i32) {
    if t == 0 { return; }
    iterate(a.left(t), a, acc);
    *acc += a.value(t);
    iterate(a.right(t), a, acc);
}

fn main() {
    let n: i32 = env::args().nth(1).and_then(|a| a.parse().ok()).unwrap_or(25);
    let mut a = Arena::new();
    let root = make(n, &mut a);
    let mut acc = 0;
    iterate(root, &a, &mut acc);
    println!("{}", acc);
}
