// Write a program that asks the user to enter 10 grades and displays the average of these grades

#include <stdio.h>

int main() {
    int counter, grade, total = 0;

    for ( counter = 1; counter <= 10; counter++) {
        do {
            printf("Enter grade number %i: ", counter);
            scanf("%i", &grade);

            if (grade < 0 || grade > 100) {
                printf("All grades must be between 0 and 100!\n");
            }
        } while( grade < 0 || grade > 100 );

        total += grade;
    }
    printf("The average of the given grades is %i", total/10);

    return 0;
}

/* Alternatively:
#include <stdio.h>

int main() {
    int counter = 1, grade, total = 0;

    while (counter <= 10) {

        do {
            printf("Enter grade number %i: ", counter);
            scanf("%i", &grade);

            if (grade < 0 || grade > 100) {
                printf("All grades must be between 0 and 100!\n");
            }

        } while (grade < 0 || grade > 100);

        total += grade;
        counter++;
    }

    printf("The average of the given grades is %i\n", total / 10);

    return 0;
}
*/
