#include <iostream>

using namespace std;

int factorial_rec(int n);
int factorial_it(int n);

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    cout << n << "! = " << factorial_it(n) << endl;
    cout << n << "! = " << factorial_rec(n) << endl;
}

int factorial_it(int n) {
    int result = 1;

    if (n == 0)
        return 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int factorial_rec(int n) {
    if (n == 0)
        return 1;

    return n * factorial_rec(n-1);
}
