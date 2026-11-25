#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Adjlist;

void AddEdge(Adjlist &A, int v1, int v2);
void Display(Adjlist &A);

int main() {
    int vertices = 4;
    Adjlist A(vertices);

    AddEdge(A, 0, 1);
    AddEdge(A, 0, 2);
    AddEdge(A, 1, 2);
    AddEdge(A, 3, 2);

    Display(A);

    return 0;
}

void AddEdge(Adjlist &A, int v1, int v2) {
    A[v1].push_back(v2);
    A[v2].push_back(v1);
}

void Display(Adjlist &A) {
    for (auto x : A) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << '\n';
    }
}
