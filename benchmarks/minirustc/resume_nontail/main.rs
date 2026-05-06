fn abs(i: i32) -> i32 {
    if (i < 0) {
        -i
    }
    else {
        i
    }
}

effect Operator {
    op(x:i32) -> (),
}

fn loop(i: i32, s: i32) -> i32 can Operator {
    if i == 0 {
        s
    } else {
        do Operator::op(i);
        loop(i-1,s)
    }
}

fn run(n: i32, s: i32) -> i32 {
    handle using Operator {
        loop(n, s)
    } with {
        op(x) => |k| {
            let y = k();
            abs(x - (503*y) + 37) % 1009
        }
    }
}

fn repeat_step(l: i32, s: i32, n: &i32) -> i32 {
    if l == 0 {
        s
    } else {
        repeat_step(l-1, run(n, s), n)
    }
}
fn repeat(n: i32) -> i32 {
    repeat_step(1000, 0, &n)
}

use std::env::Console;
fn main() {
    let n = 20000;
    let r = repeat(n);
    handle using Console::default() {
        do Console::println("{}", r);
    }
}
