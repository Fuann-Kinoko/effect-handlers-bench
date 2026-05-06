// generator_arena.cc — cache-friendly arena with indices (like minirustc's approach)
// All nodes stored in contiguous vectors; traversal is index-based.
#include <cstdio>
#include <cstdlib>
#include <vector>

struct Arena {
    std::vector<int> lefts;
    std::vector<int> rights;
    std::vector<int> values;

    Arena() {
        lefts.reserve(64);
        rights.reserve(64);
        values.reserve(64);
        // sentinel at index 0
        lefts.push_back(0);
        rights.push_back(0);
        values.push_back(0);
    }

    int node(int l, int v, int r) {
        lefts.push_back(l);
        values.push_back(v);
        rights.push_back(r);
        return static_cast<int>(lefts.size()) - 1;
    }

    int left(int idx) const  { return lefts[idx]; }
    int right(int idx) const { return rights[idx]; }
    int value(int idx) const { return values[idx]; }
};

int make(int n, Arena& a) {
    if (n == 0) return 0;
    int t = make(n - 1, a);
    return a.node(t, n, t);
}

void iterate(int t, const Arena& a, int& acc) {
    if (t == 0) return;
    iterate(a.left(t), a, acc);
    acc += a.value(t);
    iterate(a.right(t), a, acc);
}

int main(int argc, char** argv) {
    int n = argc > 1 ? std::atoi(argv[1]) : 25;
    Arena a;
    int root = make(n, a);
    int acc = 0;
    iterate(root, a, acc);
    std::printf("%d\n", acc);
    return 0;
}
