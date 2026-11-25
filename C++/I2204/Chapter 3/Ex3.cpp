#include <iostream>

using namespace std;

int main() {
    int m = 44;
    int *p = &m;
    int &r = m;
    int n = (*p++);
    int *q = p - 1;
    r = *(--p) + 1;
    ++*q;

    cout << "m = " << m << '\n'
    << "n = " << n << '\n'
    << "&m = " << &m << '\n'
    << "*p = " << *p << '\n'
    << "r = " << r << '\n'
    << "*q = " << *q << '\n';

    return 0;
}