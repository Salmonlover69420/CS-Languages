# include <stdio.h>

int main() {
    int A1[4], A2[2], i, j, s = 0;

    printf("Enter the elements of array A1: \n");
    for (i = 0; i < 4; i++) {
        scanf("%i", &A1[i]);
    }

    printf("Enter the elements of array A2: \n");
    for (i = 0; i < 2; i++) {
        scanf("%i", &A2[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j=j+1) {
            s = s + A1[i] * A2[j];
        }
    }

    printf("The sum of products is: %i", s);


    return 0;
}
