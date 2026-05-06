// WebGraph — Reference (pointer-based)
// Usage: ./naive_ref <mode> <V> [seed]
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

struct Page {
    int id;
    std::vector<Page*> links;
    std::vector<Page*> backlinks;
    int index, lowlink;
    bool onStack;
    int dist;
    bool visited;

    Page(int i) : id(i), index(-1), lowlink(-1), onStack(false),
                  dist(INT_MAX), visited(false) {}
};

struct WebGraph {
    std::vector<Page*> pages;
    ~WebGraph() { for (auto p : pages) delete p; }
};

static WebGraph buildGraph(int V, uint64_t rng) {
    WebGraph g;
    g.pages.reserve(V);
    for (int i = 0; i < V; ++i)
        g.pages.push_back(new Page(i));
    for (int i = 0; i < V; ++i) {
        uint64_t f = UINT64_MAX;
        while (lcg_next(rng) < f) {
            int j = (int)(lcg_next(rng) % V);
            if (i != j) {
                g.pages[i]->links.push_back(g.pages[j]);
                g.pages[j]->backlinks.push_back(g.pages[i]);
            }
            f >>= 1;
        }
    }
    return g;
}

static int tarjan(WebGraph& g) {
    int V = (int)g.pages.size();
    int compCount = 0;
    for (int start = 0; start < V; ++start) {
        if (g.pages[start]->index != -1) continue;
        struct Frame { Page* vertex; int edgeIdx; bool fromStart; };
        std::vector<Frame> work;
        std::vector<Page*> stack;
        int nextIdx = 0;
        work.push_back({g.pages[start], 0, true});
        while (!work.empty()) {
            auto& top = work.back();
            Page* v = top.vertex;
            if (top.fromStart) {
                v->index = nextIdx; v->lowlink = nextIdx;
                nextIdx++; stack.push_back(v); v->onStack = true;
            }
            bool pushedChild = false;
            while (top.edgeIdx < (int)v->links.size()) {
                Page* w = v->links[top.edgeIdx++];
                if (w->index == -1) {
                    top.fromStart = false;
                    work.push_back({w, 0, true});
                    pushedChild = true; break;
                } else if (w->onStack) {
                    v->lowlink = std::min(v->lowlink, w->index);
                }
            }
            if (pushedChild) continue;
            if (v->lowlink == v->index) {
                compCount++;
                while (true) {
                    Page* w = stack.back(); stack.pop_back(); w->onStack = false;
                    if (w == v) break;
                }
            }
            work.pop_back();
            if (!work.empty()) {
                Page* u = work.back().vertex;
                u->lowlink = std::min(u->lowlink, v->lowlink);
            }
        }
    }
    return compCount;
}

static int dijkstra(WebGraph& g, int source) {
    int V = (int)g.pages.size();
    for (int i = 0; i < V; ++i) {
        g.pages[i]->dist = INT_MAX; g.pages[i]->visited = false;
    }
    g.pages[source]->dist = 0;
    std::vector<int> unvisited(V);
    for (int i = 0; i < V; ++i) unvisited[i] = i;
    int remaining = V;
    while (remaining > 0) {
        int bestIdx = 0, bestDist = INT_MAX;
        for (int i = 0; i < remaining; ++i) {
            int vi = unvisited[i];
            if (g.pages[vi]->dist < bestDist) { bestDist = g.pages[vi]->dist; bestIdx = i; }
        }
        Page* v = g.pages[unvisited[bestIdx]];
        if (v->dist == INT_MAX) break;
        unvisited[bestIdx] = unvisited[--remaining]; v->visited = true;
        for (Page* w : v->links) {
            if (!w->visited) {
                int nd = v->dist + 1;
                if (nd < w->dist) w->dist = nd;
            }
        }
    }
    int reachable = 0;
    for (int i = 0; i < V; ++i)
        if (g.pages[i]->dist != INT_MAX) reachable++;
    return reachable;
}

int main(int argc, char** argv) {
    std::string mode = (argc > 1) ? argv[1] : "all";
    int V = (argc > 2) ? std::atoi(argv[2]) : 5000;
    uint64_t rng = (argc > 3) ? (uint64_t)std::atoll(argv[3]) : 42;

    if (mode == "build") {
        WebGraph g = buildGraph(V, rng);
        int edges = 0;
        for (auto p : g.pages) edges += (int)p->links.size();
        std::cout << edges << std::endl;
    } else if (mode == "tarjan") {
        WebGraph g = buildGraph(V, rng);
        std::cout << tarjan(g) << std::endl;
    } else if (mode == "dijkstra") {
        WebGraph g = buildGraph(V, rng);
        std::cout << dijkstra(g, 0) << std::endl;
    } else {
        // all: build + tarjan + dijkstra (for smoke test)
        WebGraph g = buildGraph(V, rng);
        int comps = tarjan(g);
        int reach = dijkstra(g, 0);
        std::cout << comps << " " << reach << std::endl;
    }
    return 0;
}
