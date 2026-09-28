#include <iostream>

using namespace std;

// prototypes for functions since the function is under main()
int factorial(int n); 
int factorial_it(int n);

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n < 0) {
        cout << "n cannot be negative.\n";
    } else {
        cout << n << "!= " << factorial(n) << "\n";
    }

    return 0;
}

int factorial(int n) { // recursive function (calls itself)
    if ( n == 0)
        return 1; 
    
    return n * factorial(n - 1);
}

int factorial_it(int n) { // iterative function (uses loops)
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}
