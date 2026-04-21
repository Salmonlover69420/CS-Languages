// Lab 6, Ex 8

# include <stdio.h>

int main () {
    int T[200][100], S[100] i, j, Min, MinIndex;

    printf("Enter elements of the array T: ");
    for ( i = 0; i < 200; i=i+1) {
        for ( j = 0; j < 100; j=j+1 ) {
            scanf("%i", &T[i][j]);
        }
    }

    for ( j = 0; j < 100; j=j+1 ) {
        S[j] = 0
        for ( i = 0; i < 200; i=i+1 )
            S[j] = S[j] + T[i][j];
    }

    Min = S[0];
    MinIndex = 0;
    for ( j = 1; j < 100; j=j+1 ) {
        if ( S[j] < Min ) {
            Min = S[j];
            MinIndex = j;
        }
        printf("The index of the column is: %i", MinIndex);
    }

    return 0;
}
