// 1D ARRAY POINTER WILL BE IN PARTIALS

#include <iostream>

using namespace std;

void Reverse(int *pArray, int n);

int main() {
    int *pArray = nullptr;
    int size;

    do {
        cout << "Enter the size of the array: ";
        cin >> size;
    } while (size <= 0);

    pArray = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> *(pArray + i); // or cin > pArray[i];
    }

    Reverse(pArray, size);

    cout << "The array after calling reverse\n";

    for (int i = 0; i < size; i++) {
        cout << pArray[i] << " ";
    }

    delete[] pArray;
    // pArray = nullptr; // not needed in course

    return 0;
}

void Reverse(int *pArray, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = *(pArray + i); // or temp = pArray[i];
        *(pArray + i) = *(pArray + n - 1 - i); // or pArray[i] = pArray[n - 1 - i]
        *(pArray + n - 1 - i) = temp;
    }
}
