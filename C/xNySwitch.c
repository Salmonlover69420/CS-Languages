#include <stdio.h>

int main() {
    int x, y, temp;

    printf("Input the values of x and y:");
    scanf("%i %i", &x, &y);

    temp = x;
    x = y;
    y = temp;

    printf("The new value of x is %i and that of y is %i", x, y);

    return 0;
}
