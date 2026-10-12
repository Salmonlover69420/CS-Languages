#include <iostream>

using namespace std;

float average(float v[], int n); // suppose you know average(float[], n - 1)

int main() {
    float v[10];
    int n;

    do {
        cout << "enter the array size: ";
        cin >> n;
    } while ( n <= 0);

    cout << "Enter the element of the array: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << average(v, n) << "\n";
}

float average(float v[], int n) {
    if (n == 0){
        return 0;
    }
    return (average(v, n - 1) * ( n - 1) + v[n - 1]) / n;
}
