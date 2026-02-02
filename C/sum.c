#include <stdio.h>

int main() {
    int x,y,z;

    printf("Write the first value x: ");
    scanf("%d", &x);

    printf("Write the second value y: ");
    scanf("%d", &y);

    z = x+y;
    printf("The sum of both numbers is: %d", z);

    return 0;
}