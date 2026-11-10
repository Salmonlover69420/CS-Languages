#include <iostream>
#include <vector>
#include <cstdlib> // for rand() and srand() (optional to include, some compilers indirectly use this library from iostream)
#include <ctime> // for time() (optional to include, some compilers indirectly use this library from iostream)

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Matrix;

void Display(Matrix &m);
void AddVertex(Matrix &m);
void AddEdge(Matrix &m, int u, int v);

bool IsHamiltonian(Matrix &m);
void OreTheorem(Matrix &m);
void DiracTheorem(Matrix &m);


int main() {
    Matrix m = {
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 0, 0 }
    };

    Display(m);

    cout << '\n';

    m[1][1] = 1; // change index 1, 1 to 1

    Display(m);

    cout << '\n';

    AddVertex(m);
    Display(m);

    cout << '\n';

    int u, v;

    cout << "Enter two vertices: ";
    cin >> u >> v;

    AddEdge(m, u, v);
    Display(m);

    cout << '\n';

    return 0;
}

void Display(Matrix &m) {
    for (auto x : m) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << '\n';
    }
}


void AddVertex(Matrix &m) {
    int n = m.size();

    // Add a new column to every existing row
    for (int i = 0; i < n; i++) {
        m[i].push_back(0);
    }

    // Add a new row
    m.push_back(vi(n + 1, 0));
}

void AddEdge(Matrix &m, int u, int v) {
    m[u][v] = 1;
    m[v][u] = 1;
}


bool IsHamiltonian() {
    
}

void OreTheorem() {

}

void DiracTheorem() {

}
