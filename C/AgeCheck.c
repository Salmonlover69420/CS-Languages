#include <stdio.h>
int main() {
    int age;

    printf("Enter your age: ");
    scanf("%i", &age);

    if (age < 0 || age > 125 ) {
        printf("Age must be between 0-125");

        return 1;
    }
    else {
        if ( age < 18 ) 
        printf("You are a young man.");
        else if ( age < 65 )
        printf("You are an adult.");
        else printf("You are a senior.");
    }

    return 0;
}
