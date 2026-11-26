#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Matrix;

void GenerateBipartite(Matrix &M);
void display(Matrix &M);
bool IsBipartite(Matrix &M);

int main() {
    int n = 4;

    Matrix M(n, vi(n, 0));

    GenerateAdjM(M);
    display(M);

    srand(time(0));

    GenerateBipartite(M);
    display(M);

    GenerateStar(M);
    display(M);

    return 0;
}

void GenerateAdjM(Matrix &M) {
    for (int i = 0; i < M.size(); i++) {
        for (int j = 0; j < M.size(); j++) {
            M[i][j] == rand() % 2;
        }
    }
}

void GenerateBipartite(Matrix &M) {
    int p = M.size() / 2; // Partition U = {0 .. p-1}, Partition V = {p .. n-1}
    // We do this partition since there's two sets of vertices and we must split the total amount of vertices in two to represent this.
    // Example: p = 6 / 2 = 3 => U = {0, 1, 2} & V = {3, 4, 5}
    // We can also do this split randomly instead of 50/50 by putting p = rand() % (n + 1) so U is a random size from 0 to n

    // Fill top-right block B and transpose it into bottom-left block B^T
    for (int i = 0; i < p; i++) {
        for (int j = p; j < M.size(); j++) {
            M[i][j] = rand() % 2;   // Entry in B
            M[j][i] = M[i][j];  // Transposed entry in B^T
        }
    }
}

void GenerateStar(Matrix &M) {
    int n = M.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
        }
    }

    // Vertex 0 is the center here; connect it to every other vertex
    for (int j = 1; j < n; j++) {
        M[0][j] = 1;
        M[j][0] = 1;
    }
    /*
        If you want a random vertex as the center do:
        int center = rand() % n; (and at the top if (n == 0) return; so that n can't be 0)
    */
}

void display(Matrix &M) {
    for (auto x : M) {
        for (auto y : x) {
            cout << y << " ";
        }

        cout << '\n';
    }
}
