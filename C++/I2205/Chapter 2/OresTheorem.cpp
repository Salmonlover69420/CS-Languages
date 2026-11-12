#include<iostream>
#include<vector>
using namespace std;

typedef vector<vector<int>> matrix;
typedef vector<int> v;

void degreevector(matrix &a, v &degree) {
    for (int i = 0; i < a.size(); i++) {
        int deg = 0;

        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] == 1)
                deg++;
        }

        degree.push_back(deg);
    }
}
bool validate(matrix &a, v &degree) {
    if (a.size() < 3)
        return false;

    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i][j] == 0) { // 0 only if disconnected (not adjacent), if connected (1) then it's adjacent
                if (degree[i] + degree[j] < a.size())
                    return false;
            }
        }
    }
    return true;
}

int main() {
    matrix a = {
        { 0,1,1,0 },
        { 1,0,1,0 },
        { 1,1,0,0 },
        { 0,0,0,0 }
    };
    v dv;

    degreevector(a, dv);

    for (auto x : dv) {
        cout << x << " ";
    }

    if (validate(a, dv)) {
        cout << "Hamiltonian graph>" << '\n';
    }
    else {
        cout << "Cannot conclude if it's hamiltonian or not" << '\n';
    }
}
