// Doubly-linked list — Value (index-based)
// Usage: ./efficient_val <mode> <N> [seed]
//   mode: append | traverse | remove_all | remove_half_traverse
// Output: result integer to stdout

#include <climits>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

static inline uint64_t lcg_next(uint64_t& state) {
    state = state * 6364136223846793005ULL + 1442695040888963407ULL;
    return state;
}

const int NONE = INT_MAX;

struct Node {
    int pred, succ, value;
};

static long long do_append(int N, uint64_t /*rng*/) {
    std::vector<Node> nodes;
    nodes.reserve(N);
    int head = NONE, tail = NONE;
    for (int i = 0; i < N; ++i) {
        int idx = (int)nodes.size();
        int pred = (tail != NONE) ? tail : NONE;
        nodes.push_back({pred, NONE, i});
        if (tail != NONE) nodes[tail].succ = idx;
        else head = idx;
        tail = idx;
    }
    return 0;
}

static long long do_traverse(int N, uint64_t /*rng*/) {
    std::vector<Node> nodes;
    nodes.reserve(N);
    int head = NONE, tail = NONE;
    for (int i = 0; i < N; ++i) {
        int idx = (int)nodes.size();
        int pred = (tail != NONE) ? tail : NONE;
        nodes.push_back({pred, NONE, i});
        if (tail != NONE) nodes[tail].succ = idx;
        else head = idx;
        tail = idx;
    }
    long long sum = 0;
    for (int cur = head; cur != NONE; cur = nodes[cur].succ)
        sum += nodes[cur].value;
    return sum;
}

static long long do_remove_all(int N, uint64_t rng) {
    std::vector<Node> nodes;
    nodes.reserve(N);
    int head = NONE, tail = NONE;
    std::vector<int> addrs;
    for (int i = 0; i < N; ++i) {
        int idx = (int)nodes.size();
        int pred = (tail != NONE) ? tail : NONE;
        nodes.push_back({pred, NONE, i});
        if (tail != NONE) nodes[tail].succ = idx;
        else head = idx;
        tail = idx;
        addrs.push_back(idx);
    }
    for (int i = N - 1; i > 0; --i) {
        int j = (int)(lcg_next(rng) % (i + 1));
        std::swap(addrs[i], addrs[j]);
    }
    for (int i = 0; i < N; ++i) {
        int a = addrs[i];
        int p = nodes[a].pred, s = nodes[a].succ;
        if (p != NONE) nodes[p].succ = s; else head = s;
        if (s != NONE) nodes[s].pred = p; else tail = p;
    }
    return 0;
}

static long long do_remove_half_traverse(int N, uint64_t rng) {
    std::vector<Node> nodes;
    nodes.reserve(N);
    int head = NONE, tail = NONE;
    std::vector<int> addrs;
    for (int i = 0; i < N; ++i) {
        int idx = (int)nodes.size();
        int pred = (tail != NONE) ? tail : NONE;
        nodes.push_back({pred, NONE, i});
        if (tail != NONE) nodes[tail].succ = idx;
        else head = idx;
        tail = idx;
        addrs.push_back(idx);
    }
    for (int i = N - 1; i > 0; --i) {
        int j = (int)(lcg_next(rng) % (i + 1));
        std::swap(addrs[i], addrs[j]);
    }
    for (int i = 0; i < N / 2; ++i) {
        int a = addrs[i];
        int p = nodes[a].pred, s = nodes[a].succ;
        if (p != NONE) nodes[p].succ = s; else head = s;
        if (s != NONE) nodes[s].pred = p; else tail = p;
    }
    long long sum = 0;
    for (int cur = head; cur != NONE; cur = nodes[cur].succ)
        sum += nodes[cur].value;
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
        long long r = 0;
        r += do_append(N, rng);
        r += do_traverse(N, rng);
        r += do_remove_all(N, rng);
        r += do_remove_half_traverse(N, rng);
        std::cout << r << std::endl;
    }
    return 0;
}
