#include <iostream>

using namespace std;

int BinarySearch(const int *Array, int low, int high, int x);

int main() {
    int n, low = 0, high, x, result;
    int *pArray = nullptr;

    do {
        cout << "Enter the array size: ";
        cin >> n;
    } while (n <= 0);

    high = n - 1;

    pArray = new int[n];

    cout << "Please order the array in ascending order" << '\n';
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " of the array: ";
        cin >> pArray[i];
    }

    cout << "Enter the number you wish to find: ";
    cin >> x;

    result = BinarySearch(pArray, low, high, x);

    if (result == -1) {
        cout << "Number not found!" << '\n';
    }
    else {
        cout << "Found at index " << result << '\n';
    }

    delete[] pArray;
    pArray = nullptr;

}

int BinarySearch(const int *Array, int low, int high, int x) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (x == Array[mid]) {
        return mid;
    }

    if (x > Array[mid]) {
        return BinarySearch(Array, mid + 1, high, x);
    }
    else {
        return BinarySearch(Array, low, mid - 1, x);
    }
}
