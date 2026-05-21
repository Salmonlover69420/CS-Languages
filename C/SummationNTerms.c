/*
Write a C program that prompts the user to enter a positive integer N, then displays the sum of the first N terms from the following series:
S = 9 + 99 + 999 + 9999 +….
*/
#include <stdio.h>

int main() {
    int N, i, term = 0, sum = 0;

    do {
        printf("Enter the positive integer N:\n");
        scanf("%i", &N);
    } while ( N < 0 );

    for ( i = 0; i < N; i++ ) {
        term = term * 10 + 9; // term 1 = 0*10 + 9 = 9, term 2 = 9*10 + 9 = 99, term 3 = 99*10 + 9 = 999, etc...
        sum += term; // Same as sum = sum + term
    }
    printf("The summation using the first %i terms is: %i", N, sum);

    return 0;
}
