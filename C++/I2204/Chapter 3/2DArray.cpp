#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int n = 10;
    int *t[n]; // static array (array of ptrs)
    int m;

    do {
        cout << "Enter the number of columns: ";
        cin >> m;
    } while (m <= 0);

    for (int i = 0; i < n; i++) {
        t[i] = new int[m];
    }

    cout << "Enter the elements of the array:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; i < m; j++) {
            cin >> *(*(t + i) + j); // or *(*(t[i]) + j); // or cin >> t[i][j];
        }
    }

    cout << "The array of the elements are: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; i < m; j++) {
            cout << setw(4) << *(*(t+i) + j);
        }
        cout << '\n';
    }

    for (int i = 0; i < n; i++)
        delete[] t[i];

    return 0;
}

// extra: create array of structure using dynamic alloc (might be in exam)
