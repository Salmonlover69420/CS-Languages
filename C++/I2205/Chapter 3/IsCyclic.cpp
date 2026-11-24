#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Matrix;

void display(Matrix &M);
bool IsCyclic(int size, Matrix &M);

int main() {
    int size;

    cout << "Enter the size of the matrix: ";
    cin >> size;

    srand(time(0));

    Matrix M(size, vi(size, 0));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            M[i][j] = rand() % 2;
        }
    }
    /* OR
        for (int i = 0; i < size; i++) {
            vi row;

            for (int j = 0; j < size; j++) {
                int x = 0;
                x = rand() % 2;
                row.push_back(x);
            }

            M.push_back(row);
        }

        and Matrix M(size, vi(size, 0)); -> Matrix M; instead (at the top)
    */

    display(M);

    if (IsCyclic(size, M) == true) {
        cout << "The graph is cyclic" << '\n';
    }
    else 
        cout << "The graph is not cyclic" << '\n';

    return 0;
}

void display(Matrix &M) {
    for (auto x : M) {
        for (auto y : x) {
            cout << y << " ";
        }

        cout << '\n';
    }
}

bool IsCyclic(int size, Matrix &M) {
    for (int i = 0; i < size; i++) {
        int degree = 0;

        for (int j = 0; j < size; j++) {
            if (M[i][j] != 0) {
                degree++;
            }
        }

        if (degree != 2) {
            return false;
        }
    }

    return true;
}
