#include <stdio.h>

int main() {
    float a;

    printf("Write the value of a: ");
    scanf("%f", &a);
    if (a == 0) {
        printf("Cannot get the inverse of 0!");

        return 1;
    }
    /* else { // can also not nest using else {} since it isn't needed.
        printf("The inverse of a is: %f", 1/a);
    }
    */
    else
    printf("the inverse of a is: %f", 1/a);

    return 0;
}