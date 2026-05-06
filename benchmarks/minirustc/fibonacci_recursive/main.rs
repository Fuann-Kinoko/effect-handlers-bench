// import immutable/list
// import immutable/option
// import io/args
// import text/string

// def fibonacci(n: Int): Int =
//   if (n == 0) {
//     0
//   } else if (n == 1) {
//     1
//   } else {
//     fibonacci(n - 1) + fibonacci(n - 2)
//   }

// def main() = {
//   val n = commandLineArgs().headOption.getOrElse { "" }.toInt.getOrElse { 5 };
//   val r = fibonacci(n);
//   println(r)
// }

fn fibonacci(n: i32) -> i32 {
    if (n == 0){
        0
    } else if (n == 1) {
        1
    } else {
        fibonacci(n-1) + fibonacci(n - 2)
    }
}

use std::env::Console;
fn main() {
    handle using Console::default() {
        let ret = fibonacci(42);
        do println("{}", &ret);
    }
}