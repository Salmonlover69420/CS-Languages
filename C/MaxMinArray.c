# include <stdio.h>
int main() {
    int i, v[10], max, min;

    printf("Enter the grades:");
    for (i = 0; i<10; i++) {
        scanf("%i", &v[i]);
    }

    max = v[0];
    min = v[0];

    for (i = 0; i<10; i++) { // or can do for (i=1; i<10; i++) since declared max and min = v[0] so no need to check it
        if (v[i]>max) {
            max = v[i]; // keeps checking if one value is greater than the other till we reach the greatest value
        }
        if (v[i]<min) {
            min = v[i]; // keeps checking if one value is smaller than the other till we reach the smallest value
        }
    }

    printf("Max is %i\n", max);
    printf("Min is %i\n", min);


    return 0;
}