// Doubly-linked list - Value (index-based, SoA parallel arrays)
// Same algorithms and index semantics as efficient_val.cc, different layout.
// Usage: ./efficient_val_soa <mode> <N> [seed]

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

struct DList {
    int head;
    int tail;
    std::vector<int> preds;
    std::vector<int> succs;
    std::vector<int> values;
};

static DList build_list(int N) {
    DList dl;
    dl.head = NONE;
    dl.tail = NONE;
    dl.preds.reserve(N);
    dl.succs.reserve(N);
    dl.values.reserve(N);
    for (int i = 0; i < N; ++i) {
        int idx = (int)dl.values.size();
        int pred = (dl.tail != NONE) ? dl.tail : NONE;
        dl.preds.push_back(pred);
        dl.succs.push_back(NONE);
        dl.values.push_back(i);
        if (dl.tail != NONE) dl.succs[dl.tail] = idx;
        else dl.head = idx;
        dl.tail = idx;
    }
    return dl;
}

static std::vector<int> shuffled_indices(int N, uint64_t rng) {
    std::vector<int> addrs;
    addrs.reserve(N);
    for (int i = 0; i < N; ++i) addrs.push_back(i);
    for (int i = N - 1; i > 0; --i) {
        int j = (int)(lcg_next(rng) % (i + 1));
        std::swap(addrs[i], addrs[j]);
    }
    return addrs;
}

static long long do_append(int N, uint64_t /*rng*/) {
    auto dl = build_list(N);
    return 0;
}

static long long do_traverse(int N, uint64_t /*rng*/) {
    auto dl = build_list(N);
    long long sum = 0;
    for (int cur = dl.head; cur != NONE; cur = dl.succs[cur])
        sum += dl.values[cur];
    return sum;
}

static long long do_remove_all(int N, uint64_t rng) {
    auto dl = build_list(N);
    auto addrs = shuffled_indices(N, rng);
    for (int i = 0; i < N; ++i) {
        int a = addrs[i];
        int p = dl.preds[a], s = dl.succs[a];
        if (p != NONE) dl.succs[p] = s; else dl.head = s;
        if (s != NONE) dl.preds[s] = p; else dl.tail = p;
    }
    return 0;
}

static long long do_remove_half_traverse(int N, uint64_t rng) {
    auto dl = build_list(N);
    auto addrs = shuffled_indices(N, rng);
    for (int i = 0; i < N / 2; ++i) {
        int a = addrs[i];
        int p = dl.preds[a], s = dl.succs[a];
        if (p != NONE) dl.succs[p] = s; else dl.head = s;
        if (s != NONE) dl.preds[s] = p; else dl.tail = p;
    }
    long long sum = 0;
    for (int cur = dl.head; cur != NONE; cur = dl.succs[cur])
        sum += dl.values[cur];
    return sum;
}

int main(int argc, char** argv) {
    std::string mode = (argc > 1) ? argv[1] : "all";
    int N = (argc > 2) ? std::atoi(argv[2]) : 500000;
    uint64_t rng = (argc > 3) ? (uint64_t)std::atoll(argv[3]) : 42;

    if (mode == "append") std::cout << do_append(N, rng) << std::endl;
    else if (mode == "traverse") std::cout << do_traverse(N, rng) << std::endl;
    else if (mode == "remove_all") std::cout << do_remove_all(N, rng) << std::endl;
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
