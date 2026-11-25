/*
Write a recursive function that computes the nth element of the Fibonacci series
Fib(n) = n if n <= 1
Fib(n) = fib(n - 1) + fib(n - 2)
*/

#include <iostream>

using namespace std;

int Fibonacci(int n);

int main() {
    int n;
    
    cout << "Enter the element of the fibonacci series you wish to compute: ";
    cin >> n;

    cout << "Fibonacci of element " << n << " is: " << Fibonacci(n) << "\n";
}

int Fibonacci(int n) {
    if (n <= 1)
        return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
