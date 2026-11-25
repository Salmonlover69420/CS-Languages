/*
Variables are stored in the memory and are accessed using an address
Addresses are in hexadecimal
* is the dereference operator (access the value at an address)
& is the addressof operator (get the memory address of a variable)
*/
#include <iostream>

using namespace std;

int main() {
    int Num = 20;
    int *pNum = &Num;

    double M = 100;
    double *pM = &M;

    cout << &pM << '\n';

    cout << &M << '\n';

    return 0;
}
