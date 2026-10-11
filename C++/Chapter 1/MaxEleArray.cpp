/*
Write a recursive function that determines the maximum of elements in a array tab of n integers
*/

#include <iostream>

using namespace std;

int Maximum_It(int tab[], int n);
int Maximum_Rec(int tab[], int n);

int main() {
    int n, tab[100];

    do {
        cout << "Enter the size of the array: ";
        cin >> n;
    } while (n <= 0 || n > 100);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> tab[i];

    cout << "The maximum of the elements in the array is: \n" << Maximum_It(tab, n) << "\n";
    cout << "The maximum of the elements in the array is: \n" << Maximum_Rec(tab, n) << "\n";
    return 0;
}

int Maximum_It(int tab[], int n) {
    int max = tab[0];

    for (int i = 0; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    return max;
}

int Maximum_Rec(int tab[], int n) {
    if (n == 1)
        return tab[0];

    int max = Maximum_Rec(tab, n - 1); // This is the recursive call. Suppose n = 4, asks function to find max of first 3 numbers and keeps going till n = 1

    // after recursive call returns max of the first n-1 eles, it compares with last element here
    if (tab[n - 1] > max)
        max = tab[n - 1];

    return max;
}
