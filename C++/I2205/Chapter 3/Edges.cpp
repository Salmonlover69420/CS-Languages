#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> Matrix; // or typedef vector<vi> Matrix;

struct Edge {
    int u, v, w;
};

void AddEdge(Matrix &a, Edge e);
bool IsEdge(Matrix &a, Edge e);
void RemoveEdge(Matrix &a, Edge e);
void RandomGraph(Matrix &a, int m);
Matrix RandomGraph(int m); // hw to do: declare Matrix a(n, vi(n, 0)) inside Matrix RandomGraph() and do fct
void ReadGraph(Matrix &a, int m);
void Display(Matrix &a);
int Degree(Matrix &a, int u);
vi DegreeVector(Matrix &a);
vi Neighbors(Matrix &a, int u);


int main() {
    int n = 4, m = 4;

    Matrix a(n, vi(n, 0));

    RandomGraph(a, m);
    ReadGraph(a, m);

    Display(a);

    cout << Degree(a, 0) << '\n';
    vi d = DegreeVector(a);

    for (auto x : d)
        cout << x << " ";

    vi Adjacent = Neighbors(a, 0);

    for (auto x : Adjacent)
        cout << x << " ";

    cout << '\n';

    return 0;
}

void AddEdge(Matrix &a, Edge e) {
    a[e.u][e.v] = e.w;
    a[e.v][e.u] = e.w;
}

bool IsEdge(Matrix &a, Edge e) {
    return a[e.u][e.v] != 0;
}

void RemoveEdge(Matrix &a, Edge e) {
    a[e.u][e.v] = 0;
    a[e.v][e.u] = 0;
}

void RandomGraph(Matrix &a, int m) { // m = nb of edges. This is a weighted graph
    Edge e;
    int n = a.size();

    for (int i = 0; i < m; ) {
        // Can use srand(time(0)) instead of rand() to make it random each time after running
        e.u = rand() % n;
        e.v = rand() % n;
        e.w = rand() % 100 + 1; // So that the random weight cant be 0

        if (e.u == e.v || IsEdge(a, e))
            continue;

        AddEdge(a, e);
        i++;
    }
}

Matrix RandomGraph(int m) {
    // TODO
    return Matrix();
}

void ReadGraph(Matrix &a, int m) {
    Edge e;
    int n = a.size();
    cout << "Input (u, v, w) edges: " << '\n';

    for (int i = 0; i < m; ) {
        cin >> e.u >> e.v >> e.w;

        if (e.u < 0 || e.v < 0 || e.u > n - 1 || e.v > n - 1 || e.u == e.v || IsEdge(a, e))
            continue;

        AddEdge(a, e);
        i++;
    }
}

void Display(Matrix &a) {
    for (auto v : a) {
        for (auto x : v) {
            cout << x << " ";
        }
        cout << '\n';
    }
}

int Degree(Matrix &a, int u) {
    int deg = 0;

    for (int v = 0; v < a.size(); v++) {
        if (a[u][v] != 0)
            deg++;
    }
    
    return deg;
}

vi DegreeVector(Matrix &a) {
    vi d;

    for (int u = 0; u < a.size(); u++) 
        d.push_back(Degree(a, u));
    
    return d;
}

vi Neighbors(Matrix &a, int u) {
    vi Adjacent;

    for (int v = 0; v < a[u].size(); v++) {
        if (a[u][v] != 0)
            Adjacent.push_back(v);
    }
    
    return Adjacent;
}
