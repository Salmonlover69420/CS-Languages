#include <stdio.h>

int main () {
    int A, B, C;
    float op;

    printf("Enter 3 integers to compute (A*B)/C: ");
    scanf("%i%i%i", &A, &B, &C);
    
    op = (float)(A*B)/C;

    if (C != 0)
    printf("The answer is %.2f", op);
    else {
        printf("Invalid input for C.");

        return 1;
    }

    return 0;
}
