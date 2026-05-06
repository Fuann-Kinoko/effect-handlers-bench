// RUN: %minirustc %s --new -emit=exe -o %t.exe && %t.exe | %FileCheck %s
// CHECK: 67108837

use std::env::Alloc;
use std::env::Console;
use std::vec::Vec;


type NodeH = i32;
// Koka 中的递归 Tree ADT 用 arena 索引来表示。索引 0 代表 Leaf；
// 每个 Node 存储子节点索引和一个值，分别存放在独立的 Vec<i32> 数组中。
effect TreeArena {
    node(left: NodeH, value: i32, right: NodeH) -> NodeH can Alloc,
    left(idx: NodeH) -> NodeH,
    value(idx: NodeH) -> i32,
    right(idx: NodeH) -> NodeH,
}

// 这是来自 Koka 示例的表层操作。我们立即以单次尾部 resume 消费它，
// 而不是将续延存储在 Thunk 中。
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

// 这个 arena 的优势不是“像指针一样灵活”，而是故意少给自由度：
// 1. 结构里只存 i32 下标，不存 &T，也不存自指 enum，所以 MVS 不需要追踪悬垂引用。
// 2. 节点 payload 放在连续 Vec 数组里，遍历时更 cache friendly，少追随机指针。
// 3. 所有权集中在 run 的局部变量中，析构路径清楚，不需要递归释放一堆小对象。
// 4. 下标稳定且可复制，复制“树引用”只是复制一个 i32；左右子树共享同一个 child index 时不会复制整棵树。
// 5. 真要复制整棵树，也可以按下标顺序批量复制连续数组，比沿指针递归 clone 更容易优化。
// 6. TreeArena effect 把“分配/读取节点”变成能力接口，算法只看下标，不碰底层存储布局。
// 7. 后续要换成压缩存储、池分配或调试检查，只改 handler，不改 make/iterate 的树算法。
fn run(n: i32) -> i32 can Alloc {
    let mut lefts: Vec<i32> = Vec::with_capacity((n + 1) as u64);
    let mut values: Vec<i32> = Vec::with_capacity((n + 1) as u64);
    let mut rights: Vec<i32> = Vec::with_capacity((n + 1) as u64);

    // 索引 0 处的叶子哨兵。
    lefts.push(0);
    values.push(0);
    rights.push(0);

    handle using TreeArena {
        let root = make(n);
        sumGenerated(root)
    } with {
        node(l, v, r) => |k| {
            lefts.push(l);
            values.push(v);
            rights.push(r);
            k((values.len() as i32) - 1)
        },
        left(idx) => |k| {
            k(lefts.get(idx))
        },
        value(idx) => |k| {
            k(values.get(idx))
        },
        right(idx) => |k| {
            k(rights.get(idx))
        }
    }
}

fn main() {
    let n = 25;
    let r = handle using Alloc::default() {
        run(n)
    };
    handle using Console::default() {
        do Console::println("{}", r);
    }
}
