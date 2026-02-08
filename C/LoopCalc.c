#include <stdio.h>

int main() {
    int a, b, choice;

    do {
        printf("Arithmetic Menu\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Quit\n");

        printf("Choose an operation (1 to 5): ");
        scanf("%i", &choice);
    
        if ( choice < 1 || choice > 5) {
            printf("Invalid choice.\n");

            continue;
        }

        if ( choice != 5 ) {
            printf("Choose the 2 integers: ");
            scanf("%i %i", &a, &b);
        }
        
        switch (choice) {
            case 1:
                printf("%i + %i = %i\n", a, b, a+b);
            break;

            case 2:
                printf("%i - %i = %i\n", a, b, a-b);
                break;
            
            case 3:
                printf("%i * %i = %.2f\n", a, b, (float)a*b);
                break;

            case 4:
                if ( b != 0 ) {
                    printf("%i / %i = %.2f\n", a, b, (float)a/b);
                }
                else {
                    printf("Cannot divide by 0.\n");

                    continue;
                }
                break;
            case 5:
                printf("Exiting.\n");

                return 0;
            break;
        }
    } while(1); // while(1) is to do inf loop and while(0) is to not do so.

    return 0;
}
