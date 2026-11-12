#include<iostream>
#include<vector>

using namespace std;

typedef vector<vector<int>> matrix;
typedef vector<int> vi;

void DegreeVertex(matrix &a, vi &degree);
bool DiracValidation(vi degree);

int main() {
    matrix a = { // 0 = no edge, 1 = edge. Row1 & Col1 is vertex 0, Row2 & Col2 is v1, Row3 & Col3 is v2
        { 0,1,1 },
        { 1,0,1 },
        { 1,1,0 } 
    }; // So v0 has edge with v1 and v2, v1 with v0 and v2, v2 with v0 and v1 (so graph is a cycle, triangle)
    vi degree;

    if (degree.size() < 3) {
        cout << "Dirac cant be applied." << '\n';
        return;
    }

    DiracValidation(degree);
}

void DegreeVertex(matrix &a, vi &degree) {
    for (int i = 0;i < a.size();i++) {
        int deg = 0;

        for (int j = 0;j < a[i].size();j++) {
            if (a[i][j] == 1)
                deg++;
        }

        degree.push_back(deg);
    }
}

bool DiracValidation(vi degree) {
    for (int i = 0;i < degree.size();i++) {
        if (degree[i] < degree.size() / 2.0)
            return false;
    }
    return true;
}
