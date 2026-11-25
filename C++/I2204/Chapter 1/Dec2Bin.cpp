/*
Write a function that displays the
binary value of a decimal number n
*/

#include <iostream>

using namespace std;

void Dec2Bin_it(int n);
void Dec2Bin_rec(int n);

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << n << "in binary is: ";
    Dec2Bin_it(n); // cannot put the void function in the cout, must be on a separate line.
}

void Dec2Bin_it(int n) {
    int v[25], k = 0;

    do {
        v[k] = n % 2;
        n = n / 2;
        k++;
    } while (n != 0);

    for (int i = k - 1; i >= 0; i--)
        cout << v[i];
}

void Dec2Bin_rec(int n) {
    if (n <= 1)
        cout << n;
    else {
        Dec2Bin_rec(n / 2);
        cout << n % 2;
    }
}

/*
Recursive Method 2 :
using <cmath> library:

double Dec2Bin(int n) {
    double sum = 0, i = 0;

    do {
        sum += pow(10, i) * (n % 2);
        n = n / 2;
        i++;
    } while (n != 0);

    return sum;
}
*/
