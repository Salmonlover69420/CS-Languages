/*
    //// Contains Adjacency List concept from the next chapter (chapter 3) ////

    Write a program that checks if a simple complete graph is an Eulerian Graph using Adjacency lists.
    Eulerian -> returns 2
    Semi-Eulerian -> returns 1
    Not Eulerian -> returns 0

    (Remember: Eulerian if degree of each vertex even. Semi if nb of odd vertices is exactly 2. Else, not Eulerian)
*/

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Adjlist;

void AddEdge(Adjlist &A, int v1, int v2);
int IsEulerian(Adjlist &A);

int main() {
    int vertices = 3;
    Adjlist A(vertices);

    // Triangle
    AddEdge(A, 0, 1);
    AddEdge(A, 0, 2);
    AddEdge(A, 1, 2);

    int res = IsEulerian(A);
    if (res == 2)
        cout << "Eulerian Graph.";
    else if (res == 1)
        cout << "Semi-Eulerian Graph.";
    else
        cout << "Non-Eulerian Graph.";
    return 0;
}

void AddEdge(Adjlist &A, int v1, int v2) {
    A[v1].push_back(v2);
    A[v2].push_back(v1);
}

int IsEulerian(Adjlist &A) {
    int OddVertices = 0;

    for (int i = 0; i < A.size(); i++) {
        if (A[i].size() % 2 != 0) {
            OddVertices++;
        }
    }

    if (OddVertices == 0)
        return 2; // Eulerian
    else if (OddVertices == 2)
        return 1; // Semi-Eulerian
    else
        return 0; // Not Eulerian
}
