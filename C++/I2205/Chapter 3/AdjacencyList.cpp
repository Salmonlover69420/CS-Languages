/*
    Adjacency List: Represents a graph by storing the neighbors of each vertex
*/
#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<vector<ii>> AdjList;
typedef vector<ii> vii;

struct Edge {
    /*
        u: starting vertex
        v: ending vertex
        w: weight of the edge
    */
    int u, v, w;
};

void AddEdge(AdjList &a, Edge e);
bool IsEdge(AdjList &a, Edge e);
void RemoveEdge(AdjList &a, Edge e);

int main() {
    int n = 5; // Number of vertices

    AdjList a(n); // Create Adjacency List having 5 empty vectors so:
    /*
        a[0] = {}
        a[1] = {}
        a[2] = {}
        a[3] = {}
        a[4] = {}
    */

    // Add edges
    AddEdge(a, { 0, 1, 10 }); // Add edge between vertices 0 and 1 of weight 10
    AddEdge(a, { 0, 2, 20 });
    AddEdge(a, { 1, 3, 30 });
    AddEdge(a, { 2, 3, 40 });
    AddEdge(a, { 3, 4, 50 });

    // Display graph
    cout << "Graph:" << '\n';
    for (int i = 0; i < n; i++) { // Check every vertex from 0 to 4
        cout << i << ": "; // Print the vertex
        for (auto p : a[i]) { // auto p takes type pair<int, int> (typedef as ii). Example: a[0] = {{1, 10}, {2, 20}};
            // p.first = 2, p.second = 20 (from example)
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << '\n';
    }

    /*
    Output:
        Graph:
        0: (1, 10) (2, 20)
        1: (0, 10) (3, 30)
        2: (0, 20) (3, 40)
        3: (1, 30) (2, 40) (4, 50)
        4: (3, 50)
    */

    // Check if an edge exists
    Edge e1 = { 0, 1, 10 }; // create an edge between vertices 0 and 1 of weight 10

    if (IsEdge(a, e1))
        cout << "\nEdge (0, 1) exists." << '\n';
    else
        cout << "\nEdge (0, 1) does not exist." << '\n';

    // Remove an edge
    RemoveEdge(a, e1);

    // Check again

    if (IsEdge(a, e1))
    /* 
        But now a[0] = { (2, 20) } (similar for a[1], a[2], ...)
        Search for vertex 1 but it no longer exists so we return false so else statement executes
    */
        cout << "Edge (0, 1) still exists." << '\n';
    else
        cout << "Edge (0, 1) was removed." << '\n';

    return 0;
}

void AddEdge(AdjList &a, Edge e) { 
    a[e.u].push_back({ e.v, e.w });
    a[e.v].push_back({ e.u, e.w });
}

bool IsEdge(AdjList &a, Edge e) { 
    for (int j = 0; j < a[e.u].size(); j++) { // e.u = 0 so a[0] and we search through its neighbors (we have a[0] = { (1, 10), (2, 20) } )
        // a[0]'s size is 2 so j = 0, j = 1

        if (a[e.u][j].first == e.v) // compare neighbor's vertex with the destination vertex (in the written examples, yes so return true)

            // a[0][j].first = 1 for j = 0 and e.v = 1 for j = 0 also. So return true 
            return true;
    } // keep checking for the rest

    return false;
}

void RemoveEdge(AdjList &a, Edge e) { // 2 loops since graph is undirected. AddEdge() adds an edge twice so we must remove twice
    // Remove v from u's adjacency list
    for (int j = 0; j < a[e.u].size(); j++) { // e.u = 0 so search in a[0] = { (1, 10), (2, 20) }
        if (a[e.u][j].first == e.v) { // e.v = 1. When j = 0, a[0][0].first == 1 which is true
            a[e.u].erase(a[e.u].begin() + j); // a[e.u] to access vector of vertex 0, begin() points to first element, + j moves to the element at index j, erase() removes that element
            // so a[0] = { (1, 10), (2, 20) } becomes a[0] = { (2, 20) };
            break; // exit the for loop since we found and removed the edge

            // Similar for vertex 1 till 4
        }
    }

    // Remove u from v's adjacency list
    // Similar to the previous loop
    for (int j = 0; j < a[e.v].size(); j++) {
        if (a[e.v][j].first == e.u) { // e.v = 1. When j = 0, a[0][0].first == 0 which is true
            a[e.v].erase(a[e.v].begin() + j); // removes (0, 10)
            break;
        }
    }
}
