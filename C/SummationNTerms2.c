/*
Write a C program that prompts the user to enter a positive integer N, then displays the sum of the following series:
S=(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (N*N)
*/
#include <stdio.h>

int main() {
    int N, i, term = 0, sum = 0;

    do {
        printf("Enter the positive integer N: \n");
        scanf("%i", &N);
    } while ( N <= 0 );

    for ( i = 1; i <= N; i++ ) { // can start with i = 0 but it will do (0*0) + (1*1) + ... + (N*N)
        term = i*i;
        sum += term;
    }
    printf("The sum of the series is: %i\n", sum);

    return 0;
}
