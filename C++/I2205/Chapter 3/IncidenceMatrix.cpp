#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Matrix;

struct Edge {
    int v1, v2;
};

void GenerateMatrix(int vertices, vector<Edge> &edges, Matrix &M);
void display(Matrix &M);

int main() {
    int vertices = 3;
    vector<Edge> edges = {
        {0, 1},
        {1, 2},
        {0, 2}
    };

    Matrix M; // We dont give it a size since we use push_back 
    GenerateMatrix(vertices, edges, M);
    display(M);

    return 0;
}

void GenerateMatrix(int vertices, vector<Edge> &edges, Matrix &M) {
    for (int i = 0; i < vertices; i++) {
        vi row; // Start with an empty row for vertex i

        for (int j = 0; j < edges.size(); j++) { 
            /* Loop checks every edge. j steps through the 3 edges:
                edges[0] is {0, 1} (connects v0 and v1), 
                edges[1] is {1, 2} (connects v1 and v2), 
                edges[2] is {0, 2} (connects v0 and v2) 
            */
            if (i == edges[j].v1 || i == edges[j].v2) { // Is vertex at either end of the edge? (v1 or v2)
                row.push_back(1); // Adds 1 to the end of the list (there is an edge)
            } else {
                row.push_back(0);
            }
        }

        M.push_back(row); // Append the completed row to M
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
