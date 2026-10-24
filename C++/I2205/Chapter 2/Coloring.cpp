#include<iostream>
#include<vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> mi;

void display(mi& m) {
    for (int i = 0; i < m.size();i++) {
        for (int j = 0; j < m[i].size();j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void display2(mi& m) {
    for (auto x : m) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
}

void coloring(mi& m, int i, vi& color);

int main() {
    int n = 4;
    mi m = {
        { 0,1,1,0 },
        { 1,0,1,0 },
        { 1,1,0,1 },
        { 0,0,1,0 }

    };


    display2(m);
    vi color(n, -1);

    for (int i = 0;i < m.size();i++) {
        coloring(m, i, color);

    }

    int xi = 0;
    int max = 0;

    for (auto x : color) {
        if (x > max) {
            max = x;
        }
    }

    xi = max + 1;

    cout << "xi= " << xi << endl;

    for (auto x : color) {
        cout << x << " ";
    }

    return 0;
}

void coloring(mi& m, int i, vi& color) {
    bool valid;
    for (int k = 0;k < m.size();k++) {
        valid = true;
        for (int j = 0; j < m.size();j++) {
            if (m[i][j] != 0 && color[j] == k) {
                valid = false;
                break;
            }
        }
        if (valid) {
            color[i] = k;
            return;
        }
    }
}
