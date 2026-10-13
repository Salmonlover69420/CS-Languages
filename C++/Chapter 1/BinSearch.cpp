// IMPORTANT: Array must be in ascending order for binsearch to work, or else you will need to order it in ascendin order then do the search
#include <iostream>
using namespace std;

int BinSearch(int tab[], int low, int high, int x);

int main() {
    int tab[100], n, low = 0, high, x;

    cout << "Enter the array size: ";
    cin >> n;

    high = n - 1;

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
    if (low > high)
        return -1;

    mid = (low + high) / 2;

    if (x == tab[mid])
        return mid;

    if (x < tab[mid])
        return BinSearch(tab, low, mid - 1, x);
    else
        return BinSearch(tab, mid + 1, high, x);
}
