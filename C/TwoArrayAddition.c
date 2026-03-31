# include <stdio.h>
int main() {
    int i, n, v1[100], v2[100], v3[100];

    do {
        printf("Enter the number of elements: ");
        scanf("%i\n", &n);
    } while (n < 0 || n >= 100) // if true, it will exit out of the loop. So if you take n = -5, it will remain in the loop and ask you to input another value.

    printf("Enter the elements of v1: ");
    for ( i = 0; i < n; i++ ) {
        scanf("%i", &v1[i]);
    }
    for ( i = 0; i < n; i++ ) {
        scanf("%i", &v2[i]);
    }

    //cont later

    return 0;
}