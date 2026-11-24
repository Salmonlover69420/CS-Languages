/*
Implement Hakimi-Havel algorithm using the C++ language. 
Execute your program and verify that the previous problem proposition is true.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

void display(vi v);
bool isValid(vi v);
bool isZero(vi v);
bool isGraphical(vi v);

int main() {
    int n = 4, x;

    vi v;

    for (int i = 0; i < n; i++) {
        x = rand() % n;
        v.push_back(x);
    }
    
    display(v);

    if (isGraphical(v))
        cout << "Graphical" << endl;
    else 
        cout << "Not graphical" << endl;

    return 0;
}

void display(vi v) {
    for (auto x:v) {
        cout << x << " ";
    }
    cout << endl;
}

bool isValid(vi v) {
    for (auto x:v)
        if (x < 0 || x > v.size() - 1)
            return false;
    
    return true;
}

bool isZero(vi v) {
    for (auto x:v)
        if (x != 0)
            return false;
    
    return true;
}

bool isGraphical(vi v) {

    while(true) {
        sort(v.begin(), v.end(), greater<int>());
        if (!isValid(v))
            return false;
        if (isZero(v))
            return true;
        
        int deg = v[0];
        
        v.erase(v.begin());

        for (int i = 0; i < deg; i++) {
            v[i]--;
            if (v[i] < 0)
                return false;
        }
    }
}
