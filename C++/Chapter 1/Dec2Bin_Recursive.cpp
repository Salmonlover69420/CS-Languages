/*
Write a function that displays the
binary value of a decimal number n
*/

/////// RECURSIVELY ///////

#include <iostream>

using namespace std;

void Dec2Bin(int n) {
    if (n <= 1)
        cout << n;
    else {
        Dec2Bin(n / 2);
        cout << n % 2;
    }
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << n << "in binary is: ";
    Dec2Bin(n); // cannot put the void function in the cout, must be on a separate line.
}

/*
Method 2:
using <cmath> library:
*/

// #include <iostream>
// #include <cmath>

// using namespace std;

// double Dec2Bin(int n) {
//     double sum = 0, i = 0;

//     do {
//         sum += pow(10, i) * (n % 2);
//         n = n / 2;
//         i++;
//     } while (n != 0);

//     return sum;
// }

// int main() {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;
//     cout << n << "in binary is: " << Dec2Bin(n);
// }
