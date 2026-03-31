# include <stdio.h>
int main() {
    int i, v[10], k = 0, s=0, n=0;
    float avg;

    printf("Enter the grades:");
    for (i = 0; i<10; i++) {
        scanf("%i", &v[i]);
        s = s+v[i]; // Adds all the inputed grades (sum of grades).
        if (v[i]==60) {
            n = n+1; // Counts how many students got 60.
        }
        avg = s/10;
    }
    for (i=0;i<10;i++) {
        if (v[i]>avg) {
            k=k+1; 
        }
    }

    printf("The number of students who have the grade 60 is: %i\n", n);
    printf("The average grade is %f\n", avg);

    return 0;
}
