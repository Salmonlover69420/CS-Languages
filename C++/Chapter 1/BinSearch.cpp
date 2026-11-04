/* 
    Binary Search: Algorithm used to search for an element in a SORTED array
    If the array is not sorted, you must sort it.
    How to do:
        1. Find middle element
        2. Compares the middle element with the element (x) we want to find
        3. If x < middle element, search left half
        4. If x > middle element, search right half
*/

#include <iostream>
using namespace std;

int BinSearch(int tab[], int low, int high, int x);

int main() {
    int tab[100], n, low = 0, high, x; // low will be the first index (always 0), high is the last index of the array

    cout << "Enter the array size: ";
    cin >> n;

    high = n - 1; // last index (n - 1 not n since index starts at 0 not 1)

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> tab[i];

    cout << "Enter the element to search for: ";
    cin >> x;

    cout << BinSearch(tab, low, high, x);

    return 0;
}

int BinSearch(int tab[], int low, int high, int x) {
    int mid;
    if (low > high) // if element doesnt exist in the array, return -1
        return -1;

    mid = (low + high) / 2; // calc middle index

    if (x == tab[mid]) // if element searching for is the same as middle of array
        return mid;

    if (x < tab[mid]) // search left half
        return BinSearch(tab, low, mid - 1, x); // high = mid - 1 so removed mid element and searches left part
    else // search right half
        return BinSearch(tab, mid + 1, high, x); // low = mid + 1 so removed mid element and searches right part
}
