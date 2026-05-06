
effect Counter {
    Get() -> i32,
    Set(v: i32) -> (),
}

fn countdown() -> i32 can Counter {
    let i = do Counter::Get();
    if (i == 0) {
        i
    } else {
        do Counter::Set(i-1);
        countdown()
    }
}

fn run(n: i32) {
    let mut s = n;
    handle using impl Counter {
        countdown()
    } with {
        Get() => |k| { k(s) }
        Set(v) => |k| { s = v; k() }
    }
}

use std::env::Console;

fn main() {
    let n = 200000000;
    let r = run(n);
    handle using Console::default() {
        do println("{}", r);
    }
}