/*
Write a C program that performs basic arithmetic operations on two integers entered by the user. the program must: 
1. Prompt the user to enter two integers. 
2. Prompt the user to choose an operation to perform: 
    1 for addition 
    2 for subtraction 
    3 from multiplication 
    4 for division 
3. use a function named calculate that takes the two numbers and the chosen operation (an integer) as parameters. 
This function must return the result of the chosen operation. 
Use a switch-case statement inside this function to perform the corresponding operation. 
If the user enters an invalid operation choice, the function must return a special value indicating an error (for example, 0) and display an error message in the main function 
4. display the result of the operation. if an error occurred (returning the special value) display the appropriate error message.
*/

#include <stdio.h>

float calculate(int n1, int n2, int operation);

int main() {
    int x, y, choice;
    float result;

    printf("Enter two integers: ");
    scanf("%i %i", &x, &y);

    printf("\n--Arithmetic Menu--\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nChoose an operation: ");
    scanf("%i", &choice);

    result = calculate(x, y, choice);

    if ( choice == 4 && y == 0 ){
        printf("Cannot divide by 0.\n");
        return 1;
    }
    else if ( choice > 0 && choice < 5 ) {
        printf("Result is: %.2f.\n", result);
    }
    else {
        printf("Not a valid choice.\n");
        return 1;
    }

    return 0;
}

float calculate(int n1, int n2, int operation) {
    switch(operation) {
        case 1:
            return n1 + n2;
        case 2:
            return n1 - n2;
        case 3:
            return n1 * n2;
        case 4:
            if ( n2 != 0 )
                return (float)n1/n2;
            else 
                return 0;
        default:
            return 0;
    }
}
