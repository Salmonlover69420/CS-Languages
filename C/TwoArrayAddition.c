/*
Write a C program that prompt the user to input the size n (strictly positive and ≤ 100) and the elements of two one-dimensional arrays v1 and v2. The program then summates the elements of these arrays and store the sums in a third array v3. Finally, it displays the contents of the array v3.
*/
#include <stdio.h>

int main() {
    int n, v1[100], v2[100], v3[100], i;

    printf("Enter the size of the two arrays: ");
    do {
        scanf("%i", &n);
        if ( n < 0 || n > 100 ) {
            printf("Must be +ve and <= 100! \n");
        }
    } while ( n <= 0 || n > 100 );

    printf("Enter the elements of the first array: ");
    for ( i = 0; i < n; i++ ) {
        scanf("%i", &v1[i]);
    }

    printf("Enter the elements of the second array: ");
    for ( i = 0; i < n; i++ ) {
        scanf("%i", &v2[i]);
    }

    for ( i = 0; i < n; i++ ) {
        v3[i] = v1[i] + v2[i];
    }
    printf("v3 is: \n");
    for ( i = 0; i < n; i ++) {
        printf("%i ", v3[i]);
    }

    return 0;
}
