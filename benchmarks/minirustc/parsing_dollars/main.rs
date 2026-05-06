// RUN: %minirustc %s --new -emit=exe -o %t.exe && %t.exe | %FileCheck %s
// CHECK: 55

use std::env::Console;

effect Read {
    read() -> i32 can Stop,
}

effect Emit {
    emit(e: i32) -> (),
}

effect Stop {
    stop() -> !,
}

struct Feed {
    n: i32,
    i: i32,
    j: i32,
}

impl handle Read for Feed {
    fn read(mut self, k: Continuation(i32)) can Stop {
        if self.i > self.n {
            do Stop::stop()
        } else if self.j == 0 {
            self.i = self.i + 1;
            self.j = self.i;
            k(newline())
        } else {
            self.j = self.j - 1;
            k(dollar())
        }
    }
}

fn newline() -> i32 { 10 }
fn dollar() -> i32 { 36 }

fn isNewline(c: i32) -> bool { c == 10 }
fn isDollar(c: i32) -> bool { c == 36 }

fn parse(a: i32) -> () can Read, Emit, Stop {
    let c = do Read::read();
    if isDollar(c) {
        parse(a + 1)
    } else if isNewline(c) {
        do Emit::emit(a);
        parse(0)
    } else {
        do Stop::stop()
    }
}

fn run(n: i32) -> i32 {
    let mut s = 0;

    // Feed 把原来 feed handler 里的输入状态机固化成 provider struct：n 是上限，i/j 是当前行状态。
    // Read 仍然是 single-shot tail resume；输入耗尽时从 Feed::read 向外层 Stop 做 no-resume 退出。
    // Emit 还保留为聚合 handler，因为最终 sum 要在 handle 结束后读取，直接捕获局部 s 更清楚。
    handle using Emit {
        handle using Stop {
            handle using Feed { n: n, i: 0, j: 0 } {
                parse(0)
            }
        } with {
            stop() => {()}
        }
    } with {
        emit(e) => |k| {
            s += e;
            k()
        }
    };
    // handle using Emit, Stop, Feed { n: n, i: 0, j: 0 } {
    //     parse(0)
    // } with {
    //     Stop::stop() => {
    //         ()
    //     },
    //     Emit::emit(e) => |k| {
    //         s += e;
    //         k()
    //     },
    // };
    s
}

fn main() {
    let n = 20000;
    let r = run(n);
    handle using Console::default() {
        do Console::println("{}", r);
    }
}
