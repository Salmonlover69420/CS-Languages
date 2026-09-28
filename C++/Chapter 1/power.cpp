#include <iostream>

using namespace std;

int power(int b, int p);
int power_it(int b, int p);

int main() {
    int b, p;
    cout << "Enter the base integer: ";
    cin >> b;

    cout << "Enter the power: ";
    cin >> p;

    cout << b << "^" << p << " = " << power(b, p) << "\n";
}

int power(int b, int p) {
    if (p == 0) {
        return 1;
    }
    return b * power(b, p - 1);
}

int power_it(int b, int p) {
    int res = 1;
    for (int i = 1; i <= p; i++ ) {
        res *= b; 
    }

    return res;
}
