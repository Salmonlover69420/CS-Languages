#include <stdio.h>

int main() {
    int k=0, n, i, v1[100], v2[100];

    do {
        printf("Enter n: ");
        scanf("%i", &n);
    } while ( n<= 0 || n> 100);

    printf("Enter the element of the array v1: ");
    for (i = 0; i < n; i++ ) {
        printf("v1[%i] = ", i);
        scanf("%i", &v1[i]);
    }

    printf("Enter the element of the array v2: ");
    for (i = 0; i < n; i++) {
        scanf("%i", &v2[i]);
    }

    for (i = 0; i < n; i++) {
        if (v1[i] != v2[i] ) {
            k = 1;
            break;
        }

        if (k == 0 ) {
            printf("both arrays are equal.");
        }
        else printf("the two arrays are not equal.");
    }
    return 0;
}
