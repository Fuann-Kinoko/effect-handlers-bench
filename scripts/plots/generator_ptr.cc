// generator_ptr.cc — classic pointer-chasing with heap-allocated Nodes
// Each Node is individually new'd; traversal follows random heap pointers.
#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <vector>

struct Node {
    Node* left;
    Node* right;
    int   value;

    Node(Node* l, int v, Node* r) : left(l), value(v), right(r) {}
};

Node* make(int n) {
    if (n == 0) return nullptr;
    Node* t = make(n - 1);
    return new Node(t, n, t);
}

void iterate(Node* t, int& acc) {
    if (!t) return;
    iterate(t->left, acc);
    acc += t->value;
    iterate(t->right, acc);
}

void cleanup(Node* t) {
    if (!t) return;
    // Nodes are shared (DAG); avoid double-free by keeping a visited set.
    // Since this is a benchmark we just leak to keep timing clean.
    // In a real program you'd use shared_ptr or arena.
}

int run(int n) {
    Node* root = make(n);
    int acc = 0;
    iterate(root, acc);
    // intentional leak — shared DAG nodes make cleanup complex
    return acc;
}

int main(int argc, char** argv) {
    int n = argc > 1 ? std::atoi(argv[1]) : 25;
    auto t0 = std::chrono::high_resolution_clock::now();
    int result = run(n);
    auto t1 = std::chrono::high_resolution_clock::now();
    std::printf("%d\n", result);
    double sec = std::chrono::duration<double>(t1 - t0).count();
    std::fprintf(stderr, "time: %.6f s\n", sec);
    return 0;
}
