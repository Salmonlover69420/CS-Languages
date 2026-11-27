#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> Matrix;

struct Edge {
    int u; // Starting vertex
    int v; // Ending vertex
    int w; // Edge Weight
};

void AddEdge(Matrix &a, Edge e);
bool IsEdge(Matrix &a, Edge e);
void RemoveEdge(Matrix &a, Edge e);
void RandomGraph(Matrix &a, int NbEdges);
Matrix RandomGraph(int NbVertices, int NbEdges); // Overloaded version that creates and returns a new Matrix
void ReadGraph(Matrix &a, int NbEdges);
void Display(Matrix &a);
int Degree(Matrix &a, int u);
vi DegreeVector(Matrix &a);
vi Neighbors(Matrix &a, int u);

int main() {
    int NbVertices = 4;

    // A simple undirected graph with 4 vertices can have at most 4 * 3 / 2 = 6 unique edges.
    // We generate 3 random edges now and read 2 manual edges next (total = 5 edges <= 6).
    Matrix a = RandomGraph(NbVertices, 3);

    cout << "Initial random graph:\n";
    Display(a);

    // Ask the user to enter 2 more unique edges
    ReadGraph(a, 2);

    cout << "\nUpdated graph:\n";
    Display(a);

    // Calculate and print how many edges are connected to vertex 0
    cout << "\nDegree of vertex 0: " << Degree(a, 0) << '\n';

    // Get a list containing the degree of every vertex (0, 1, 2, 3) and print it
    vi d = DegreeVector(a);
    cout << "Degree vector: ";
    for (auto x : d)
        cout << x << " ";
    cout << '\n';

    // Get a list of all vertices directly connected to vertex 0 and print them
    vi Adjacent = Neighbors(a, 0);
    cout << "Neighbors of vertex 0: ";
    for (auto x : Adjacent)
        cout << x << " ";
    cout << '\n';

    return 0;
}

// Inserts a weighted undirected edge between e.u and e.v
void AddEdge(Matrix &a, Edge e) {
    a[e.u][e.v] = e.w; // Set weight from u to v
    a[e.v][e.u] = e.w; // Set identical weight from v to u (symmetric for undirected graphs)
}

// Checks whether an edge already exists between e.u and e.v
bool IsEdge(Matrix &a, Edge e) {
    // 0 represents "no edge", so any non-zero value means an edge exists
    return a[e.u][e.v] != 0;
}

// Deletes an undirected edge by resetting both directions back to 0
void RemoveEdge(Matrix &a, Edge e) {
    a[e.u][e.v] = 0;
    a[e.v][e.u] = 0;
}

// Populates an existing matrix 'a' with 'NbEdges' unique random weighted edges
void RandomGraph(Matrix &a, int NbEdges) {
    Edge e;
    int NbVertices = a.size();

    // Formula for maximum unique edges in a simple undirected graph: V * (V - 1) / 2
    int maxEdges = NbVertices * (NbVertices - 1) / 2;

    // Clamp NbEdges so the loop below never gets stuck looking for edges that cannot exist
    if (NbEdges > maxEdges) {
        NbEdges = maxEdges;
    }

    // Notice there is no 'i++' in the header: we only increment 'i' when a valid edge is added
    for (int i = 0; i < NbEdges; ) {
        e.u = rand() % NbVertices; // Random vertex index from 0 to NbVertices - 1
        e.v = rand() % NbVertices; // Random vertex index from 0 to NbVertices - 1
        e.w = rand() % 100 + 1;    // Random weight from 1 to 100 (+1 ensures weight is never 0)

        // Reject self-loops (u == v) and duplicate edges (IsEdge(a, e))
        if (e.u == e.v || IsEdge(a, e))
            continue; // Jump back to the start of the loop and try new random numbers

        AddEdge(a, e); // Valid edge found: insert it into the matrix
        i++;           // Count this successful edge
    }
}

// Overloaded RandomGraph: creates a fresh NbVertices x NbVertices matrix of 0s, fills it, and returns it
Matrix RandomGraph(int NbVertices, int NbEdges) {
    Matrix a(NbVertices, vi(NbVertices, 0)); // Initialize 2D vector filled with 0s
    RandomGraph(a, NbEdges);                 // Reuse the void RandomGraph function above to fill 'a'
    return a;                                // Return the completed graph
}

// Reads 'NbEdges' valid edges from user keyboard input
void ReadGraph(Matrix &a, int NbEdges) {
    Edge e;
    int NbVertices = a.size(); //( = nb of rows/columns)
    cout << "Input " << NbEdges << " unique (u, v, w) edges:\n";

    for (int i = 0; i < NbEdges; ) {
        cin >> e.u >> e.v >> e.w;

        // Validate input before inserting:
        // 1. e.u < 0 || e.v < 0                     -> Reject negative vertex indices
        // 2. e.u >= NbVertices || e.v >= NbVertices -> Reject out-of-bounds vertex indices
        // 3. e.u == e.v                             -> Reject self-loops
        // 4. e.w == 0                               -> Reject weight 0 (0 means "no edge" in our matrix)
        // 5. IsEdge(a, e)                           -> Reject edges that already exist
        if (e.u < 0 || e.v < 0 || e.u >= NbVertices || e.v >= NbVertices || e.u == e.v || e.w == 0 || IsEdge(a, e)) {
            cout << "Invalid or duplicate edge, try again:\n";
            continue;
        }

        AddEdge(a, e);
        i++;
    }
}

// Prints the entire adjacency matrix row by row
void Display(Matrix &a) {
    // 'auto &v' reads each row by reference without copying it
    for (auto &v : a) {
        for (auto x : v) { // 'x' is each integer weight inside row 'v'
            cout << x << " ";
        }
        cout << '\n';
    }
}

// Returns the degree (number of connected edges) of a single vertex 'u'
int Degree(Matrix &a, int u) {
    int deg = 0;

    // Scan across row 'u' and count every non-zero entry
    for (int v = 0; v < a.size(); v++) {
        if (a[u][v] != 0)
            deg++;
    }

    return deg;
}

// Returns a vector containing the degree of every vertex in the graph
vi DegreeVector(Matrix &a) {
    vi d; // Empty list to store degrees

    for (int u = 0; u < a.size(); u++) {
        d.push_back(Degree(a, u)); // Compute degree of vertex 'u' and append it to 'd'
    }

    return d;
}

// Returns a vector containing the indices of all vertices adjacent to vertex 'u'
vi Neighbors(Matrix &a, int u) {
    vi Adjacent;

    // Check every column 'v' in row 'u'
    for (int v = 0; v < a[u].size(); v++) {
        if (a[u][v] != 0) {
            Adjacent.push_back(v); // Column index 'v' is a neighbor of 'u'
        }
    }

    return Adjacent;
}
