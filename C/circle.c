#include <stdio.h>

int main() {
    float r, pi, a, p;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    pi = 3.14;
    p = 2*pi*r;
    a = pi*r*r;
    
    printf("The perimeter of the circle is: %.2f \n", p);
    printf("The area of the circle is: %.2f \n", a);

    return 0;
}
