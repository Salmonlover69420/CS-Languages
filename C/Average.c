#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter the 3 integers: ");
    scanf("%i%i%i", &a, &b, &c);

    //avg = (a+b+c)/3;

    printf("The average of the three integers is: %.2f", (a+b+c)/3.0);

    return 0;
}
