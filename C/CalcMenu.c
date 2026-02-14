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
    printf("5. Modulo of the two numbers (%)\n");

    printf("Choose an operation (1 to 5): ");
    scanf("%i", &op);
    if ( op >= 1 && op <=5 ) {
        switch(op) {
            case 1:
            printf("%i + %i = %i\n", a, b, a+b);
            break;

            case 2:
            printf("%i - %i = %i\n", a, b, a-b);
            break;
            
            case 3:
            printf("%i x %i = %i\n", a, b, a*b);
            break;

            case 4:
            if ( b != 0 ) {
                printf("%i / %i = %.2f\n", a, b, (float)a/b);
            }
            else {
                printf("The second integer cannot be 0.");

                return 1;
            }

            break;

            case 5:
            if (b != 0 ) {
                printf("%i %% %i = %i\n", a, b, a%b);
            }
            else {
                printf("The second integer cannot be 0.");

                return 1;
            }           
            break;

        }
    }
    else {
        printf("You must choose between 1 and 5.\n");

        return 1;
    } 
    return 0;
}
