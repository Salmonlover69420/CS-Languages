#include <vector>
#include <iostream>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;          // 1. Define pi BEFORE Adjlist
typedef vector<vi> Matrix;
typedef vector<vector<pi>> Adjlist; // 2. 2D: each vertex has a vector of {neighbor, weight}

struct Edge {
    int v1, v2, w;
};

// 3. Function prototypes so main() recognizes them
void GenerateGraphM(Matrix &M, Edge e);
void GenerateGraphL(Adjlist &L, Edge e);

int main() {
    int n, m; // n = number of vertices, m = number of edges
    cin >> n >> m; // 4. Read n BEFORE creating M and L

    Matrix M(n, vi(n, 0));
    Adjlist L(n);

    // 5. Loop over the m edges here, adding one edge at a time
    Edge e;
    for (int i = 0; i < m; i++) {
        cin >> e.v1 >> e.v2 >> e.w;
        GenerateGraphM(M, e);
        GenerateGraphL(L, e);
    }

    // Print Matrix
    cout << "\nMatrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }

    // Print Adjlist
    cout << "\nAdjlist:\n";
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j = 0; j < L[i].size(); j++) {
            cout << "(" << L[i][j].first << ", " << L[i][j].second << ") ";
        }
        cout << "\n";
    }

    return 0;
}

void GenerateGraphM(Matrix &M, Edge e) {
    M[e.v1][e.v2] = e.w;
}

void GenerateGraphL(Adjlist &L, Edge e) {
    L[e.v1].push_back({e.v2, e.w});
}
