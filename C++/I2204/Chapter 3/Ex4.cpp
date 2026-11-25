#include <iostream>

using namespace std;

void copy(double *q, double *p, int n) {
    for (int i = 0; i < n; i++) {
        *(q + i) = *(p + i);
    }
}

int main() {
    double *p, *q;
    int n;

    do {
        cout << "Enter array size: ";
        cin >> n;
    } while (n <= 0);

    p = new double[n];
    q = new double[n];

    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> *(p + i);
    }

    copy(q, p, n);
    
    cout << "The coppied array";

    for (int i = 0; i < n; i++) {
        cout << *(q + i);
    }

    return 0;
}



