#include <stdio.h>

int main() {
    float f, c;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0/9.0)*(f-32);

    printf("The temperature in Celsius is: %.2f", c);

    return 0;
}
