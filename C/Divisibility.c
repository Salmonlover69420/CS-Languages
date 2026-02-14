//Write a C program that asks the user to enter two integers and test if the 1st is divisible by the 2nd or not.

#include <stdio.h>
int main () {
    int a, b;

    printf("Enter the integers a and b: ");
    scanf("%i %i", &a, &b);

    if ( b != 0 ) {
        if ( a%b == 0 ) 
        printf("%i is divisible by %i", a, b);
        else 
        printf("The %i is not divisible by %i", a, b);
    }
    else {
        printf("The second integer cannot be 0.");
        return 1;
    }
    return 0;
}
