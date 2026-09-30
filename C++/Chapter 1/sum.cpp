/*
Write an iterative and recursive
functions that calculates
Sn = tab[0] + tab[1] + … + tab[n - 1] where n is the elements number
*/

#include <iostream>

using namespace std;

// Iterative method:
int sum_it(int v[], int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++)
        sum += v[i];

    return sum;
}

// Recursive method:

int sum_rec(int v[], int n) {
    if (n == 0)
        return 0; // can return v[0]

    return sum_rec(v, n - 1) + v[n - 1]; // in math terms: https://imgur.com/a/CTCT4I0
    // if doing return v[0] for n = 0, then return sum_rec(v, n-2) + v[n - 1];
}

int main() {
    int v[100], n;

    do {
        cout << "Enter the array size: ";
        cin >> n;
    } while (n <= 0 || n > 100);

    cout << "Input the array's elements:\n";

    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    cout << "The sum of the elements in the array is: " << sum_it(v, n);
}
