#include <stdio.h>

int main() {
    float a;

    printf("Write the value of a: ");
    scanf("%f", &a);
    if (a == 0) {
        printf("Cannot get the inverse of 0!");

        return 1;
    }
    /* else { // can also just not nest using else {} since it isnt needed.
        printf("The inverse of a is: %f", 1/a);
    }
    */
    printf("the inverse of a is: %f", 1/a);
    return 0;
}