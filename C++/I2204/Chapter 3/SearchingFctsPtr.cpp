#include <iostream>

using namespace std;

void Sort(int size, int *t);
int Find(int nb, int size, int *t);
int BinarySearch(int *t, int low, int high, int x);

int main() {
    int size, nb, Index, low, high;
    int *t = nullptr;

    do {
        cout << "Enter the size of the array: ";
        cin >> size;
    } while (size <= 0);

    low = 0;
    high = size - 1;

    t = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter index " << i << ": ";
        cin >> *(t + i);
    }

    Sort(size, t);

    for (int i = 0; i < size; i++) {
        cout << t[i] << " ";
    }

    cout << '\n';

    cout << "Enter the number you wish to find: ";
    cin >> nb;

    // Method 1: Reg Search
    Index = Find(nb, size, t);
    if (Index != -1) {
        cout << "Found number at index" << Index << '\n';
    }
    else {
        cout << "Number not found.";
    }

    // Method 2: Binsearch
    Index = BinarySearch(t, low, high, nb);
    if (Index != -1) {
        cout << "Found number at index" << Index << '\n';
    }
    else {
        cout << "Number not found.";
    }
    delete[] t;
    t = nullptr; // Not needed for this course.

    return 0;
}

void Sort(int size, int *t) {
    int temp = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (*(t + j) > *(t + j + 1)) {
                temp = *(t + j);
                *(t + j) = *(t + j + 1);
                *(t + j + 1) = temp;
            }
        }
    }
}

int Find(int nb, int size, int *t) {
    for (int i = 0; i < size; i++) {
        if (nb == *(t + i)) {
            return i;
        }
    }

    return -1;
}

int BinarySearch(int *t, int low, int high, int x) {
    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (x == t[mid]) {
        return mid;
    }

    if (x < t[mid]) {
        return BinarySearch(t, low, mid - 1, x);
    }
    else
        return BinarySearch(t, mid + 1, high, x);
}
