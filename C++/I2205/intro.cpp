#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int> &v);

int main() {
    int n = 4;
    vector<int> v;
    vector<int> v1(n, 0);

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);

    cout << v.size() << endl;

    v1.push_back(7);
    v1.push_back(10);

    cout << v1.size() << endl;

    v1[0] = 3;
    v1[1] = 12;

    display(v);
    display(v1);

    return 0;
}

void display(const vector<int> &v) {
    for (int i = 0; i < v.size(); i++) // or for (auto x:v)
        cout << v[i] << " ";
    cout << endl;
}
