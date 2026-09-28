#include <iostream>
using namespace std;

int factorial(int n); // prototype for function since the function is under main()

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

int factorial(int n) {
    if ( n == 0)
        return 1; 
    
    return n * factorial(n - 1);
}
