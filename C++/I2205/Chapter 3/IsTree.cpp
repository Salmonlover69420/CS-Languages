#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Matrix;

void GenerateMatrix(Matrix &M);
void display(Matrix &M);
bool IsTree(Matrix &M);

int main() {
    Matrix M(4, vi(4, 0));

    GenerateMatrix(M);

    display(M);

    if (IsTree(M) == true) {
        cout << "The graph is a tree." << '\n';
    }
    else 
        cout << "The graph is not a tree." << '\n';

    return 0;
}

void GenerateMatrix(Matrix &M) {
    int x;    

    srand(time(0));

    for (int i = 0; i < M.size(); i++) {
        for (int j = 0; j < M.size(); j++) {
            x = rand() % 2;
            M[i][j] = x;
        }
    }
}

void display(Matrix &M) {
    for (auto x : M) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << '\n';
    }
}

// Adjacency Matrix MUST be symmetric since the graph is undirected
bool IsTree(Matrix &M) {
    int n = 0, m = 0; // n = nb of vertices, m = nb of edges

    for (int i = 0; i < M.size(); i++) {
        n++;

        for (int j = 0; j < i; j++) {
            if (M[i][j] == 1) {
                m++;
            }
        }
    }

    if (m == n - 1) {
        return true;
    }

    return false;
}
