# include <stdio.h>

int MaxNumber(int a, int b); // Prototype of the function; declaration of the function.

int main() {
    int x, y, Result; // x & y store user input. Result stores the returned value from the function.
    printf("Enter two integers: \n");
    scanf("%i %i", &x, &y);
    Result = MaxNumber(x, y); // Not (int x, int y)

    printf("The max number is: %i\n", Result);

    return 0;
}

int MaxNumber(int a, int b) {
    if ( a > b )
        return a;
    else 
        return b;
}

/*
Can also do instead of doing prototype: 
# include <stdio.h>

int MaxNumber(int a, int b) {
    if ( a > b )
        return a;
    else 
        return b;
}

int main() {
    int x, y, Result; // x & y store user input. Result stores the returned value from the function.
    printf("Enter two integers: \n");
    scanf("%i %i", &x, &y);
    Result = MaxNumber(x, y); // Not (int x, int y)

    printf("The max number is: %i\n", Result);

    return 0;
}
*/
