#include <iostream>
#include <cstddef> // Ensures NULL is defined

using namespace std;

// Function prototypes
void copy(double *q, double *p, int n);
int *Find(int *a, int size, int nb);
float sum(float *p[], int n);

int main() {
    // --- PART 1: Copy an array of double using pointers ---
    int n;

    do {
        cout << "Enter array size: ";
        cin >> n;
    } while (n <= 0);

    double *p = new double[n];
    double *q = new double[n];

    cout << "Enter " << n << " double values: ";
    for (int i = 0; i < n; i++) {
        cin >> *(p + i);
    }

    copy(q, p, n);

    cout << "Copied array: ";
    for (int i = 0; i < n; i++) {
        cout << *(q + i) << ' ';
    }
    cout << "\n\n";

    // --- PART 2: Find the address of an integer in an array ---
    int a[] = { 1, 7, 3, 4, 6 };
    int nb;

    cout << "Enter a number to search in {1, 7, 3, 4, 6}: ";
    cin >> nb;

    int *address = Find(a, 5, nb);

    if (address != NULL) {
        cout << "Found " << *address << " at memory address: " << address << "\n\n";
    }
    else {
        cout << "Number not found (returned NULL).\n\n";
    }

    // --- PART 3: Sum of n values pointed to by an array of pointers ---
    float f1 = 1.5f, f2 = 2.5f, f3 = 4.0f;
    float *ptrArr[] = { &f1, &f2, &f3 }; // Array of 3 pointers to float

    float total = sum(ptrArr, 3);
    cout << "Sum of pointed values: " << total << '\n';

    // Free dynamically allocated memory from Part 1
    delete[] p;
    delete[] q;
    p = NULL; // Not needed for this course
    q = NULL; // Not needed for this course

    return 0;
}

// PART 1: Copies n elements from source array p into destination array q
void copy(double *q, double *p, int n) {
    for (int i = 0; i < n; i++) {
        *(q + i) = *(p + i);
    }
}

// PART 2: Searches array 'a' for 'nb' and returns its address, or NULL if absent
int *Find(int *a, int size, int nb) {
    for (int i = 0; i < size; i++) {
        if (nb == *(a + i)) {
            return a + i; // Same as &a[i]
        }
    }
    return NULL;
}

// PART 3: Sums the values stored at each address in pointer array p
float sum(float *p[], int n) {
    float s = 0;
    
    for (int i = 0; i < n; i++) {
        s += *p[i]; // Dereferences the i-th pointer in the array
    }

    return s;
}
