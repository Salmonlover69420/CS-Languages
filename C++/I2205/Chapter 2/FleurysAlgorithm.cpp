// NOT FOR MIDTERMS, RELATED TO CHAPTER 4

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;

int DFS(vii &g, int u, vb &visited);
bool isConnected(vii &g);
bool isBridge(vii &g, int u, int v);

int main() {
    int n, m;
    cin >> n >> m;

    vii g(n, vi(n, 0));

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        g[u][v] = 1;
        g[v][u] = 1;
    }

    printEulerian(g);

    return 0;
}

int DFS(vii &g, int u, vb &visited) {
    visited[u] = true;
    int count = 1;

    for (int v = 0; v < g.size(); v++) {
        if (g[u][v] == 1 && !visited[v])
            count += DFS(g, v, visited);
    }

    return count;
}

bool isConnected(vii &g) {
    int start = -1;
    int n = g.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] == 1) {
                start = i;
                break;
            }
        }
        if (start != -1) break;
    }

    if (start == -1) return true;

    vb visited(n, false);
    DFS(g, start, visited);

    for (int i = 0; i < n; i++) {
        int degree = 0;
        for (int j = 0; j < n; j++)
            degree += g[i][j];

        if (degree > 0 && !visited[i])
            return false;
    }

    return true;
}

bool isBridge(vii &g, int u, int v) {
    vb visited(g.size(), false);
    int before = DFS(g, u, visited);

    g[u][v] = 0;
    g[v][u] = 0;

    visited.assign(g.size(), false);
    int after = DFS(g, u, visited);

    g[u][v] = 1;
    g[v][u] = 1;

    return after < before;
}

int findStart(vii &g) {
    int odd = 0;
    int start = -1;

    for (int i = 0; i < g.size(); i++) {
        int degree = 0;

        for (int j = 0; j < g.size(); j++)
            degree += g[i][j];

        if (degree > 0)
            start = i;

        if (degree % 2 == 1) {
            odd++;
            start = i;
        }
    }

    if (odd != 0 && odd != 2)
        return -1;

    return start;
}

void printEulerian(vii &g) {
    if (!isConnected(g)) {
        cout << "No Eulerian trail exists";
        return;
    }

    int start = findStart(g);

    if (start == -1) {
        cout << "No Eulerian trail exists";
        return;
    }

    int u = start;

    cout << "Eulerian trail: ";

    while (true) {
        bool found = false;

        for (int v = 0; v < g.size(); v++) {
            if (g[u][v] == 1 && !isBridge(g, u, v)) {

                cout << u << " - " << v << "  ";

                g[u][v] = 0;
                g[v][u] = 0;

                u = v;
                found = true;
                break;
            }
        }

        if (!found) {
            for (int v = 0; v < g.size(); v++) {
                if (g[u][v] == 1) {

                    cout << u << " - " << v << "  ";

                    g[u][v] = 0;
                    g[v][u] = 0;

                    u = v;
                    found = true;
                    break;
                }
            }
        }

        if (!found)
            break;
    }
}
