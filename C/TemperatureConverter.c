#include <stdio.h>

int main() {
    float f, c;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0/9.0)*(f-32);

    printf("The temperature in Celsius is: %.2f", c);

    return 0;
}

/* More Advanced:

#include <stdio.h>
#define FREEZING_POINT 32 (We use macro definition to name the constant 32 as FREEZINT_POINT and since #define is a preprocessing directive, it doesn't need a ;)
#define SCALE_FACTOR 5.0f/9.0f // Can put it as 5.0/9.0 to be double instead of float. Remember: 5 is an int, 5.0 is a double, 5.0f is a float.

int main() {
    float f, c;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = SCALE_FACTOR*(f-FREEZING_POINT);

    printf("The temperature in Celsius is: %.2f", c);

    return 0;
}

*/