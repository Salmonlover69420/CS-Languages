#include <stdio.h>

int factorial(int n) {
    if ( n == 0 ) {
        return 1;
    }
    return n*factorial(n-1);
}

int main() {
    int x, result;

    printf("Enter an integer: ");
    scanf("%i", &x);

    result = factorial(x);

    printf("The factorial of the number is %i", result);

    return 0;
}
