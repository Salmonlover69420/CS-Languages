#include <iostream>

using namespace std;

int main() {
    int n = 44;
    cout << "n = " << n << '\n'; // 44
    cout << "&n = " << &n << '\n'; // n's memory address
    cout << '\n';
    
    int *pn = &n;
    cout << "pn = " << pn << '\n'; // n's memory address
    cout << "&pn = " << &pn << '\n'; // pn's memory address
    cout << "*pn = " << *pn << '\n'; // 44
    cout << '\n';

    int **ppn = &pn;
    cout << "ppn = " << ppn << '\n'; // pn's memory address
    cout << "&ppn = " << &ppn << '\n'; // ppn's memory address
    cout << "*ppn = " << *ppn << '\n'; // pn's value (address of n)
    cout << "**ppn = " << **ppn << '\n'; // 44

    return 0;
}
