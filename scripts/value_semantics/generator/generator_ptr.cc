// generator_ptr.cc — classic pointer-chasing with heap-allocated Nodes
// Each Node is individually new'd; traversal follows random heap pointers.
#include <cstdio>
#include <cstdlib>

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

int main(int argc, char** argv) {
    int n = argc > 1 ? std::atoi(argv[1]) : 25;
    Node* root = make(n);
    int acc = 0;
    iterate(root, acc);
    // intentional leak — shared DAG nodes make cleanup complex
    std::printf("%d\n", acc);
    return 0;
}
