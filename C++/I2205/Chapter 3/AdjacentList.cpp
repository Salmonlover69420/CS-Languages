#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vector<ii>> AdjList;
typedef vector<ii> vii;

struct Edge{
    int u, v, w;
};

void AddEdge(AdjList &a, Edge e);
bool IsEdge(AdjList &a, Edge e);
void RemoveEdge(AdjList, Edge e);

int main() {
    // TODO 
    return 0;
}

void AddEdge(AdjList &a, Edge e) {
    a[e.u].push_back({e.v, e.w});
    a[e.v].push_back({e.u, e.w});
}

bool IsEdge(AdjList &a, Edge e) {
    for (int j = 0; j < a[e.u].size(); j++) {
        if (a[e.u][j].first == e.v)
            return true;
    }

    return false;
}

void RemoveEdge(AdjList, Edge e) {
    // TODO
}
