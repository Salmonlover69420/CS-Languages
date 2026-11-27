#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Adjlist;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

// Build adjacency list of an n-dimensional hypercube Q_n
Adjlist buildHypercube(int n) {
    int num_vertices = 1 << n;
    Adjlist adj(num_vertices);

    for (int u = 0; u < num_vertices; ++u) {
        for (int bit = 0; bit < n; ++bit) {
            adj[u].push_back(u ^ (1 << bit));
        }
        sort(adj[u].begin(), adj[u].end());
    }
    return adj;
}

// Edge check: true iff (u ^ v) is a power of 2
bool hasEdge(int n, int u, int v) {
    int num_vertices = 1 << n;
    if (u < 0 || u >= num_vertices || v < 0 || v >= num_vertices) 
        return false;
    int diff = u ^ v;
        return diff != 0 && (diff & (diff - 1)) == 0;
}

void printGraph(int n, const Adjlist& adj) {
    int num_vertices = 1 << n;
    int num_edges = (n > 0) ? n * (1 << (n - 1)) : 0;

    cout << "Hypercube Q_" << n << " (" << num_vertices << " vertices, "
         << num_edges << " edges):\n";

    for (int u = 0; u < num_vertices; ++u) {
        cout << u << ": ";
        for (int v : adj[u]) {
            cout << v << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n = 3; // 3D hypercube
    Adjlist adj = buildHypercube(n);
    printGraph(n, adj);
    
    return 0;
}
