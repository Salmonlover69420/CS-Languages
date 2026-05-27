/*
Write a C program that asks the user to enter the elements of an array V of n elements (n is user defined and ≤ 10), and creates and displays the table Vpair (that contains the even elements of V)
*/
#include <stdio.h>

int main() {
    int n, i, V[10], Vpair[10], j = 0;

    printf("Enter the number of elements in the array: \n");
    scanf("%i", &n);
    printf("Enter the elements of the array: \n");

    for ( i = 0; i < n; i++ ) {
        scanf("%i", &V[i]);
    }
    for ( i = 0; i < n; i++ ) {
        if ( V[i]%2 == 0 ) {
            Vpair[j] = V[i];
            j++;
        }
    }
    printf("The array containing all even elements of the first array is: \n");
    for ( i = 0; i < j; i++ ) {
        printf("%i ", Vpair[i]);
    }

    return 0;
}
