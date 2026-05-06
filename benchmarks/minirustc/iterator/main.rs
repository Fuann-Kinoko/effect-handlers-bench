effect Emit {
    emit(e: u64) -> (),
}

fn range(l: i32, u: i32) can Emit {
    if (l<=u) {
        do emit(l as u64);
        range(l+1, u);
    }
}

fn run(n: i32) -> u64 {
    let mut s: u64 = 0;
    // 注意：不要把 `s` 写成 handle body 的尾表达式：
    //   handle using Emit { range(0, n); s } with { ... }
    // 当前前端会拒绝这种形状，因为 handler 可变捕获了 `s`，而 handle body 又可能触发 Emit。
    // 这个例子里的 `s += e; k()` 看上去是 tail-resumptive，似乎不会和 body 里的 `s` 读取重叠；
    // 但一般 handler 可以在 `k()` 返回后继续使用/修改 `s`，或者以非尾调用方式 resume continuation。
    // 在没有 continuation-aware/NLL 证明前，把 `s` 放到 handle 结束之后读取才是安全边界。
    handle using Emit {
        range(0, n);
        s
    } with {
        emit(e) => |k| {
            s += e;
            k()
        }
    }
}

use std::env::Console;
fn main() {
    let n = 40000000;
    handle using Console::default() {
        let r = run(n);
        do Console::println("{}", r);
    }
}
