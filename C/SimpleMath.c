#include <stdio.h>

int main() {
    int a, b;
    float ans;
    char op;

    printf("Enter the two integers: ");
    scanf(" %i%i", &a,&b);

    printf("Enter the operation to be used (+,-,*,/)");
    scanf(" %c", &op);

    if (op == '+') printf(" %i + %i = %i", a, b, a+b);
    else if (op == '-') printf(" %i - %i = %i", a, b, a-b);
    else if (op == '*') printf(" %i * %i = %i", a, b, a*b);
    else if (op == '/') { 
        if (b != 0) printf(" %i / %i = %i", a, b, a/b);
        else {
            printf("Cannot divide by 0!");

            return 1;
        }
    }
    else {
        printf("Invalid operation");

        return 1;
    }

    return 0;
}
