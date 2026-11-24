#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> Matrix; // or typedef vector<vi> Matrix;

struct Edge {
    /*
        u: first vertex
        v: second vertex
        w: weight (of edge)
    */
    int u, v, w;
};

void AddEdge(Matrix &a, Edge e);
bool IsEdge(Matrix &a, Edge e);
void RemoveEdge(Matrix &a, Edge e);
void RandomGraph(Matrix &a, int NbEdges);
Matrix RandomGraph(int NbEdges); // hw to do: declare Matrix a(NbVertices, vi(NbVertices, 0)) inside Matrix RandomGraph() and do fct
void ReadGraph(Matrix &a, int NbEdges);
void Display(Matrix &a);
int Degree(Matrix &a, int u);
vi DegreeVector(Matrix &a);
vi Neighbors(Matrix &a, int u);


int main() {
    int NbVertices = 4, NbEdges = 4; // NbVertices: nb of vertices, NbEdges: nb of edges

    Matrix a(NbVertices, vi(NbVertices, 0)); // create 4x4 matrix filled with 0s (Note: a zero means no edge connects those two vertices)

    RandomGraph(a, NbEdges); // Generates 4 random edges
    /* Example:
        0 1 5
        0 2 8
        1 2 3
        2 3 10
    */

    ReadGraph(a, NbEdges); // Asks user to input 4 more edges (fct rejects ones already generated in RandomGraph(), so input unique ones)

    Display(a);

    cout << Degree(a, 0) << '\n'; // Calculates and prints the degree of vertex 0
    vi d = DegreeVector(a); // Calculates the degree of every vertex and stores the results in a vector

    for (auto x : d)
        cout << x << " "; // Prints every element of the degree vector.

    vi Adjacent = Neighbors(a, 0); // Finds all the neighbors of vertex 0

    for (auto x : Adjacent)
        cout << x << " "; // Prints their vertex nbs

    cout << '\n';

    return 0;
}

void AddEdge(Matrix &a, Edge e) {
    a[e.u][e.v] = e.w;
    a[e.v][e.u] = e.w;

    /* Example:
        a[0][1] = 5;
        a[1][0] = 5;
    */
}

bool IsEdge(Matrix &a, Edge e) {
    return a[e.u][e.v] != 0; // If the matrix contains a non-0 value then an edge exists, else no edge exists
}

void RemoveEdge(Matrix &a, Edge e) { 
    // two assignments since undirected graph
    // sets both matrix positions to 0:
    a[e.u][e.v] = 0;
    a[e.v][e.u] = 0;
    // thus removing connection between both vertices
}

void RandomGraph(Matrix &a, int NbEdges) { // NbEdges = nb of edges. This is a weighted graph
    Edge e; // Create Edge var
    int NbVertices = a.size(); // Gets nb of rows in the matrix (in this case 4 since we made a 4x4 matrix)

    for (int i = 0; i < NbEdges; ) { // Runs until we addess NbEdges edges succesfully, NO i++ HERE, WRITE AFTER
        // Can use srand(time(0)) instead of rand() to make it random each time after running
        // Generates two random vertex nbs (possible values are 0, 1, 2, 3 since NbVertices = 4):
        e.u = rand() % NbVertices;
        e.v = rand() % NbVertices;

        e.w = rand() % 100 + 1; // So that the random weight cant be 0, generates a random weight between 1 and 100

        if (e.u == e.v || IsEdge(a, e)) // e.u == e.v prevents an edge connecting a vertex to itself, IsEdge(a, e) prevents duplicate edges.
            continue; // skips the lines below ( ones inside the loop) and retries

        // If edge is valid: 
        AddEdge(a, e); // add edge to matrix
        i++; // We only increment i after we succesfully add an edge!!
    }
}

Matrix RandomGraph(int NbEdges) {
    // TODO
    return Matrix();
}

void ReadGraph(Matrix &a, int NbEdges) { // User manually inputs edges
    Edge e;
    int NbVertices = a.size();
    cout << "Input (u, v, w) edges: " << '\n';

    for (int i = 0; i < NbEdges; ) {
        cin >> e.u >> e.v >> e.w;

        /* Example of input:
            0 1 5
            0 2 8
            1 2 3
            2 3 10
        */

        // (can also put as >= NbVertices instead of > NbVertices - 1 in the if condition below)
        if (e.u < 0 || e.v < 0 || e.u > NbVertices - 1 || e.v > NbVertices - 1 || e.u == e.v || IsEdge(a, e)) // Reject negative vertex nbs, vertex nbs > NbVertices-1, edges connecting vertex to itself, edges that already exist
            continue;

        AddEdge(a, e);
        i++;
    }
}

void Display(Matrix &a) {
    for (auto v : a) { // iterates thru every row of matrix
        for (auto x : v) { // iterates thru ever element of that row
            cout << x << " ";
        }
        cout << '\n';
    }
}

int Degree(Matrix &a, int u) { // degree is the nb of edges connected to that vertex
    int deg = 0;

    for (int v = 0; v < a.size(); v++) {
        if (a[u][v] != 0)
            deg++;
    }
    
    return deg;

    /* Example:
        Suppose:
        0 5 8 0
        5 0 3 0
        8 3 0 10
        0 0 10 0

        Degree of vertex 0:
            Row is 0 5 8 0
            a[0][0] is 0, no edge
            a[0][1] is 5, edge
            a[0][2] is 8, edge
            a[0][3] is 0, no edge

            Thus deg = 2

        Continue for all other vertices smaller than a.size()
    */
}

vi DegreeVector(Matrix &a) { // Calculates the degree of every vertex and stores the results in a vector
    vi d; // create empty vector

    for (int u = 0; u < a.size(); u++) // loop through every vertex
        d.push_back(Degree(a, u)); // Calculates the degree of vertex u and adds it to the vector
    
    return d; // returns vector

    /* Example ( using that of Degree() )
        Vertex 0: Deg = 2 (got in previous example)
        1: 2
        2: 3
        3: 1

        So resulting vector is d = {2, 2, 3, 1}
    */
}

vi Neighbors(Matrix &a, int u) { // Finds neighbor of a vertex
    vi Adjacent; 

    for (int v = 0; v < a[u].size(); v++) {
        if (a[u][v] != 0)
            Adjacent.push_back(v);
    }
    
    return Adjacent;

    /* Example:
        Vertex 0: 
            0 5 8 0
            a[0][0] = 0: Not a neighbor
            a[0][1] = 5: neighbor
            a[0][2] = 8: neighbor
            a[0][3] = 0: Not a neighbor

            So Adjacent = {1, 2}
        
        Same for other vertices
    */
}
