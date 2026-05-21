# include <stdio.h>
int main() {
    int i, v[10], k = 0, s=0, n=0;
    float avg;

    printf("Enter the grades:");
    for (i = 0; i<10; i++) {
        scanf("%i", &v[i]);
        s = s+v[i]; // Adds all the inputed grades (sum of grades).
        if (v[i]==60) {
            n = n+1; // Counts how many students got 60. Those who don't have 60 exit this for loop and enters the one below.
        }
        avg = s/10; // can put this outside the loop
    }
    for (i=0;i<10;i++) { // must be in a separate loop (cannot be in the first loop) since the average would not yet be completed.
        if (v[i]>avg) {
            k=k+1; // Checks how many got above average
        }
    }

    printf("The number of students who have the grade 60 is: %i\n", n);
    printf("The average grade is %f\n", avg);
    printf("The number of students who got above average grades is: %i\n", k);

    return 0;
}
