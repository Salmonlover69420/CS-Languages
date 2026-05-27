/*
Write a C program that asks the user to enter the elements of two arrays A1 of 4 integers and A2 of 2 integers. The program displays the sum of the products of the two tables. i.e., multiply each element of A1 by each element of A2, then summates all the products
*/
#include <stdio.h>

int main() {
    int A1[4], A2[2], i, j, sum = 0;

    printf("Enter 4 integers for A1:\n");
    for (i = 0; i < 4; i++) {
        scanf("%i", &A1[i]);
    }

    printf("Enter 2 integers for A2:\n");
    for (i = 0; i < 2; i++) {
        scanf("%i", &A2[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            sum += A1[i] * A2[j];
        }
    }

    printf("Sum of all products = %i\n", sum);

    return 0;
}