// Doubly-linked list — Reference (pointer-based)
// Usage: ./naive_ref <mode> <N> [seed]
//   mode: append | traverse | remove_all | remove_half_traverse
// Output: result integer to stdout

#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

static inline uint64_t lcg_next(uint64_t& state) {
    state = state * 6364136223846793005ULL + 1442695040888963407ULL;
    return state;
}

struct Node {
    Node* prev;
    Node* next;
    int   value;
    Node(int v) : prev(nullptr), next(nullptr), value(v) {}
};

static long long do_append(int N, uint64_t /*rng*/) {
    Node* head = nullptr, *tail = nullptr;
    for (int i = 0; i < N; ++i) {
        Node* n = new Node(i);
        if (!head) { head = tail = n; }
        else { tail->next = n; n->prev = tail; tail = n; }
    }
    while (head) { Node* d = head; head = head->next; delete d; }
    return 0;
}

static long long do_traverse(int N, uint64_t /*rng*/) {
    Node* head = nullptr, *tail = nullptr;
    for (int i = 0; i < N; ++i) {
        Node* n = new Node(i);
        if (!head) { head = tail = n; }
        else { tail->next = n; n->prev = tail; tail = n; }
    }
    long long sum = 0;
    for (Node* cur = head; cur; cur = cur->next) sum += cur->value;
    while (head) { Node* d = head; head = head->next; delete d; }
    return sum;
}

static long long do_remove_all(int N, uint64_t rng) {
    Node* head = nullptr, *tail = nullptr;
    std::vector<Node*> addrs;
    for (int i = 0; i < N; ++i) {
        Node* n = new Node(i);
        if (!head) { head = tail = n; }
        else { tail->next = n; n->prev = tail; tail = n; }
        addrs.push_back(n);
    }
    for (int i = N - 1; i > 0; --i) {
        int j = (int)(lcg_next(rng) % (i + 1));
        std::swap(addrs[i], addrs[j]);
    }
    for (int i = 0; i < N; ++i) {
        Node* a = addrs[i];
        if (a->prev) a->prev->next = a->next;
        else head = a->next;
        if (a->next) a->next->prev = a->prev;
        else tail = a->prev;
        delete a;
    }
    return 0;
}

static long long do_remove_half_traverse(int N, uint64_t rng) {
    Node* head = nullptr, *tail = nullptr;
    std::vector<Node*> addrs;
    for (int i = 0; i < N; ++i) {
        Node* n = new Node(i);
        if (!head) { head = tail = n; }
        else { tail->next = n; n->prev = tail; tail = n; }
        addrs.push_back(n);
    }
    for (int i = N - 1; i > 0; --i) {
        int j = (int)(lcg_next(rng) % (i + 1));
        std::swap(addrs[i], addrs[j]);
    }
    for (int i = 0; i < N / 2; ++i) {
        Node* a = addrs[i];
        if (a->prev) a->prev->next = a->next;
        else head = a->next;
        if (a->next) a->next->prev = a->prev;
        else tail = a->prev;
        delete a;
    }
    long long sum = 0;
    for (Node* cur = head; cur; cur = cur->next) sum += cur->value;
    while (head) { Node* d = head; head = head->next; delete d; }
    return sum;
}

int main(int argc, char** argv) {
    std::string mode = (argc > 1) ? argv[1] : "all";
    int N = (argc > 2) ? std::atoi(argv[2]) : 500000;
    uint64_t rng = (argc > 3) ? (uint64_t)std::atoll(argv[3]) : 42;

    if (mode == "append")              std::cout << do_append(N, rng) << std::endl;
    else if (mode == "traverse")        std::cout << do_traverse(N, rng) << std::endl;
    else if (mode == "remove_all")      std::cout << do_remove_all(N, rng) << std::endl;
    else if (mode == "remove_half_traverse") std::cout << do_remove_half_traverse(N, rng) << std::endl;
    else {
        // all modes for smoke test
        long long r = 0;
        r += do_append(N, rng);
        r += do_traverse(N, rng);
        r += do_remove_all(N, rng);
        r += do_remove_half_traverse(N, rng);
        std::cout << r << std::endl;
    }
    return 0;
}
