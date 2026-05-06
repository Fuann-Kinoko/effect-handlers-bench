// WebGraph — Value (index-based, CSR)
// Usage: ./efficient_val <mode> <V> [seed]
//   mode: build | tarjan | dijkstra
// Output: result integer to stdout

#include <algorithm>
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

struct WebGraph {
    int V;
    std::vector<int> head;
    std::vector<int> to;
};

static WebGraph buildGraph(int V, uint64_t rng) {
    std::vector<std::vector<int>> tmp(V);
    for (int i = 0; i < V; ++i) {
        uint64_t f = UINT64_MAX;
        while (lcg_next(rng) < f) {
            int j = (int)(lcg_next(rng) % V);
            if (i != j) tmp[i].push_back(j);
            f >>= 1;
        }
    }
    WebGraph g;
    g.V = V;
    g.head.resize(V + 1);
    int total = 0;
    for (int i = 0; i < V; ++i) {
        g.head[i] = total;
        for (int w : tmp[i]) g.to.push_back(w);
        total += (int)tmp[i].size();
    }
    g.head[V] = total;
    return g;
}

static int tarjan(const WebGraph& g) {
    int V = g.V;
    std::vector<int> index(V, -1), lowlink(V, -1);
    std::vector<bool> onStack(V, false);
    std::vector<int> stack; stack.reserve(V);
    int compCount = 0;

    for (int start = 0; start < V; ++start) {
        if (index[start] != -1) continue;
        struct Frame { int vertex; int edgeIdx; bool fromStart; };
        std::vector<Frame> work;
        int nextIdx = 0;
        work.push_back({start, g.head[start], true});
        while (!work.empty()) {
            auto& top = work.back();
            int v = top.vertex;
            if (top.fromStart) {
                index[v] = nextIdx; lowlink[v] = nextIdx;
                nextIdx++; stack.push_back(v); onStack[v] = true;
            }
            bool pushedChild = false;
            int end = g.head[v + 1];
            while (top.edgeIdx < end) {
                int w = g.to[top.edgeIdx++];
                if (index[w] == -1) {
                    top.fromStart = false;
                    work.push_back({w, g.head[w], true});
                    pushedChild = true; break;
                } else if (onStack[w]) {
                    lowlink[v] = std::min(lowlink[v], index[w]);
                }
            }
            if (pushedChild) continue;
            if (lowlink[v] == index[v]) {
                compCount++;
                while (true) {
                    int w = stack.back(); stack.pop_back(); onStack[w] = false;
                    if (w == v) break;
                }
            }
            work.pop_back();
            if (!work.empty()) {
                int u = work.back().vertex;
                lowlink[u] = std::min(lowlink[u], lowlink[v]);
            }
        }
    }
    return compCount;
}

static int dijkstra(const WebGraph& g, int source) {
    int V = g.V;
    std::vector<int> dist(V, INT_MAX);
    std::vector<bool> visited(V, false);
    dist[source] = 0;
    std::vector<int> unvisited(V);
    for (int i = 0; i < V; ++i) unvisited[i] = i;
    int remaining = V;
    while (remaining > 0) {
        int bestIdx = 0, bestDist = INT_MAX;
        for (int i = 0; i < remaining; ++i) {
            int vi = unvisited[i];
            if (dist[vi] < bestDist) { bestDist = dist[vi]; bestIdx = i; }
        }
        int v = unvisited[bestIdx];
        if (dist[v] == INT_MAX) break;
        unvisited[bestIdx] = unvisited[--remaining]; visited[v] = true;
        for (int e = g.head[v]; e < g.head[v + 1]; ++e) {
            int w = g.to[e];
            if (!visited[w]) {
                int nd = dist[v] + 1;
                if (nd < dist[w]) dist[w] = nd;
            }
        }
    }
    int reachable = 0;
    for (int i = 0; i < V; ++i)
        if (dist[i] != INT_MAX) reachable++;
    return reachable;
}

int main(int argc, char** argv) {
    std::string mode = (argc > 1) ? argv[1] : "all";
    int V = (argc > 2) ? std::atoi(argv[2]) : 5000;
    uint64_t rng = (argc > 3) ? (uint64_t)std::atoll(argv[3]) : 42;

    if (mode == "build") {
        WebGraph g = buildGraph(V, rng);
        std::cout << (int)g.to.size() << std::endl;
    } else if (mode == "tarjan") {
        WebGraph g = buildGraph(V, rng);
        std::cout << tarjan(g) << std::endl;
    } else if (mode == "dijkstra") {
        WebGraph g = buildGraph(V, rng);
        std::cout << dijkstra(g, 0) << std::endl;
    } else {
        WebGraph g = buildGraph(V, rng);
        int comps = tarjan(g);
        int reach = dijkstra(g, 0);
        std::cout << comps << " " << reach << std::endl;
    }
    return 0;
}
