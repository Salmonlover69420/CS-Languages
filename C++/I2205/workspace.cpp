#include<iostream>
#include<vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> mi;

void display(mi &m) { // like commented one up above but auto instead of iterative loops
    for (auto x : m) { // selects row
        for (auto y : x) { // checks each element of the row
            cout << y << " "; // ends up printing the matrix
        }
        cout << '\n';
    }
}



int main() {
    int n = 4;
    mi m = {
        { 0,1,1,0 },
        { 1,0,1,0 },
        { 1,1,0,1 },
        { 0,0,1,0 }
    };

    display(m);

    return 0;
}