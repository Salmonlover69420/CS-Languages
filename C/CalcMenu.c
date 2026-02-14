#include <stdio.h>
int main () {
    int a, b, op;

    printf("Enter the two integers: ");
    scanf("%i %i", &a, &b);

    printf("--{{Arithmetic Menu}}--\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    printf("Choose an operation (1 to 4): ");
    scanf("%i", &op);
    if ( op >= 1 && op <=4 ) {
        switch(op) {
            case 1:
            printf("%i + %i = %i\n", a, b, a+b);
            break;

            case 2:
            printf("%i - %i = %i\n", a, b, a-b);
            break;
            
            case 3:
            printf("%i x %i = %i", a, b, a*b);
            break;

            case 4:
            if (b != 0 )
            printf("%i / %i = %.2f\n", a, b, (float)a/b);
            else {
                printf("Cannot divide by 0.");

                return 1;
            }
            break;
        }
    }
    else {
        printf("You must choose between 1 and 4.");

        return 1;
    } 
    return 0;
}
