#include <stdio.h>

int power(int x, int y);

int main() {
    int x, y, result;

    printf("Enter the two integers: ");
    scanf("%i %i", &x, &y);

    result = power(x, y);

    printf("Result: %i", result);

    return 0;
}

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}
