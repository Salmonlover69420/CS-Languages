/*
    Write a C++ program that tests if the graph G is a complete graph.

    Simple omplete graph in Adjacency Matrix: All diagonal entries = 0, non-diagonal all = 1.
    In Adjacency List: 
*/

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Matrix;

void display(Matrix &M);
void GenerateGraph(int size, Matrix &M);
bool IsComplete(int size, Matrix &M);

int main() {
    int size;

    cout << "Enter the size of the matrix: ";
    cin >> size;
    
    Matrix M(size, vi(size, 0));
    
    GenerateGraph(size, M);

    display(M);

    if (IsComplete(size, M) == true) {
        cout << "The graph is a complete graph." << '\n';
    }
    else
        cout << "The graph is not a complete graph." << '\n';

    return 0;
}

void GenerateGraph(int size, Matrix &M) {
    srand(time(0));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            M[i][j] = rand() % 2;
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

bool IsComplete(int size, Matrix &M) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                if (M[i][j] != 0) {
                    return false;
                }
            }

            if (i != j) {
                if (M[i][j] != 1) {
                    return false;
                }
            }
        }
    }

    return true;
}
