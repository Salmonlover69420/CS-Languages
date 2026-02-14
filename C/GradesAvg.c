#include <stdio.h>

int main() {
    int grade1, grade2, grade3;
    float average;

    printf("Enter your 3 grades: ");
    scanf("%i%i%i", &grade1, &grade2, &grade3);

    average = (grade1 + grade2 + grade3)/3.0;

    printf("Your average is %.2f\n", average);

    if ( average < 50 )
    printf("Failed.\n");
    else if ( average < 60 )
    printf("Fair.\n");
    else if ( average < 70  )
    printf("Good.\n");
    else if ( average < 80 )
    printf("Very good.\n");
    else printf("Excellent.\n");

    return 0;
}
