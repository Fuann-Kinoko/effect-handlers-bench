// RUN: %minirustc %s --new -emit=exe -o %t.exe && %t.exe | %FileCheck %s
// CHECK: 0

use std::env::Alloc;
use std::env::Console;
use std::vec::Vec;

effect Done {
    done(value: i32) -> !,
}

fn enumerate(i: i32) -> Vec<i32> can Alloc {
    let mut v: Vec<i32> = Vec::with_capacity((i + 1) as u64);
    let mut j = i;
    while j >= 0 {
        v.push(j);
        j = j - 1;
    }
    v
}

fn productAt(xs: &Vec<i32>, idx: i32, len: i32) -> i32 can Done {
    if idx == len {
        0
    } else {
        let y = xs.get(idx) + 0;
        if y == 0 {
            do Done::done(0)
        } else {
            y * productAt(xs, idx + 1, len)
        }
    }
}

fn runProduct(xs: &Vec<i32>) -> i32 {
    handle using Done {
        productAt(xs, 0, xs.len() as i32)
    } with {
        done(r) => { r }
    }
}

fn loop(i: i32, a: i32, xs: &Vec<i32>) -> i32 {
    if i == 0 {
        a
    } else {
        loop(i - 1, a + runProduct(xs), xs)
    }
}

fn run(n: i32) -> i32 can Alloc {
    let xs = enumerate(1000);
    loop(n, 0, &xs)
}

fn main() {
    let n = 100000;
    let r = handle using Alloc::default() {
        run(n)
    };
    handle using Console::default() {
        do Console::println("{}", r);
    }
}
