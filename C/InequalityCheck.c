#include <stdio.h>

int main () {
    int a, b;

    printf("Enter the 2 integers a and b: ");
    scanf("%i%i", &a, &b);
    
    if (a > b)
    printf("a is greater than b");
    else if ( a < b )
    printf("b is greater than a");
    else 
    printf("a is equal to b"); // Essentially if a = b

    return 0;
}
