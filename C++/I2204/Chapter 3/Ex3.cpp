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

    cout << "m = " << m << '\n' // m = 46
        << "n = " << n << '\n' // n = 44
        << "&m = " << &m << '\n' // &m=0x3fffd44
        << "*p = " << *p << '\n' // *p=46
        << "r = " << r << '\n' // r=46
        << "*q = " << *q << '\n'; // *q=46

    return 0;
}