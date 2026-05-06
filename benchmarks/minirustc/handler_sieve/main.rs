// RUN: %minirustc %s --new -emit=exe -o %t.exe && %t.exe | %FileCheck %s
// CHECK: 17

use std::env::Alloc;
use std::env::Console;
use std::vec::Vec;

// Koka 原版用 DEEP_STACK_OF_HANDLERS：每发现一个 prime，就动态包一层
// `prime(e)` handler，把历史 prime 编码进 handler/continuation 链。
// Minirustc 不把这种链条当隐式数据结构保存；这里把 handler 链
// defunctionalize 成 Alloc 支持的连续 Vec<i32>，只存 owned prime 值。
effect PrimeTable {
    len() -> i32,
    get(idx: i32) -> i32,
    push(value: i32) -> () can Alloc,
}

fn hasDivisorAt(idx: i32, e: i32) -> bool can PrimeTable, Alloc {
    let len = do PrimeTable::len();
    if idx >= len {
        false
    } else {
        let p = do PrimeTable::get(idx);
        if e % p == 0 {
            true
        } else {
            hasDivisorAt(idx + 1, e)
        }
    }
}

fn isPrime(e: i32) -> bool can PrimeTable, Alloc {
    if e < 2 {
        false
    } else {
        if hasDivisorAt(0, e) {
            false
        } else {
            true
        }
    }
}

fn primes(i: i32, n: i32, a: i32) -> i32 can PrimeTable, Alloc {
    if i >= n {
        a
    } else {
        if isPrime(i) {
            do PrimeTable::push(i);
            primes(i + 1, n, a + i)
        } else {
            primes(i + 1, n, a)
        }
    }
}

fn run(n: i32) -> i32 can Alloc {
    let mut table: Vec<i32> = Vec::with_capacity((n + 1) as u64);

    handle using PrimeTable {
        primes(2, n, 0)
    } with {
        len() => |k| {
            k(table.len() as i32)
        },
        get(idx) => |k| {
            k(table.get(idx))
        },
        push(value) => |k| {
            table.push(value);
            k()
        }
    }
}

fn main() {
    let n = 60000;
    let r = handle using Alloc::default() {
        run(n)
    };

    handle using Console::default() {
        do Console::println("{}", r);
    }
}
