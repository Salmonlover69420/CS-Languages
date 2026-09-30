/*
Write a function that displays the
binary value of a decimal number n
*/

/////// ITERATIVELY ///////

#include <iostream>

using namespace std;

void Dec2Bin(int n) {
    int v[25], k = 0;

    do {
        v[k] = n % 2;
        n = n / 2;
        k++;
    } while (n != 0);

    for (int i = k - 1; i >= 0; i--)
        cout << v[i];
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << n << "in binary is: ";
    Dec2Bin(n); // cannot put the void function in the cout, must be on a separate line.
}
