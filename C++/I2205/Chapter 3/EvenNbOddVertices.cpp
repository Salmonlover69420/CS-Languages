/*
    Write a C++ program that verifies that the number of odd vertices is even in a graph represented by an adjacency matrix.
*/

#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Matrix;

bool IsEven(int size, Matrix &AdjacencyMatrix);

int main() {
    int size = 5;

    Matrix AdjacencyMatrix = {
        { 0, 1, 1, 2, 0 },
        { 1, 0, 0, 0, 1 },
        { 1, 0, 0, 1, 1 },
        { 2, 0, 1, 0, 0 },
        { 0, 1, 1, 0, 0 }
    };

    if (IsEven(size, AdjacencyMatrix) == true) {
        cout << "The number of odd vertices is even." << '\n';
    }
    else {
        cout << "The number of odd vertices is odd." << '\n';
    }


    return 0;
}

bool IsEven(int size, Matrix &AdjacencyMatrix) {
    int OddVertices = 0;

    for (int i = 0; i < size; i++) {
        int degree = 0;

        for (int j = 0; j < size; j++) {
            degree += AdjacencyMatrix[i][j];
        }

        if (degree % 2 != 0) {
            OddVertices++;
        }
    }

    if (OddVertices % 2 == 0) {
        return true;
    }

    return false;
}
