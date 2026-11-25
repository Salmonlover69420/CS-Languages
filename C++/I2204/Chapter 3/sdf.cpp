#include <iostream>

using namespace std;

float sum(float *p[], int n) {
    float sum = 0; 
    for (int i = 0; i < n; i++)
        sum += *p[i];
    return n;
}

int main() {
    float *p[20]; // static pointer
    int n;
    do {
        cout << "Enter the array size";
        cin >> n;
    } while (n <= 0);

    
}
