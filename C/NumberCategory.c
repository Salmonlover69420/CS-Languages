#include <stdio.h>

int main() {
    int X;

    printf("Enter the value of the integer X: ");
    scanf("%i", &X);

    if ((0 <= X ) && (X < 37 ))
    printf("X belongs to category A");
    else
    printf("X belongs to category B.");

    return 0;
}
