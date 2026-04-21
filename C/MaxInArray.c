// Lab 6; Ex 6

# include <stdio.h>

int main() {
    int i = 0, j = 0, T[10][3], max, nb_max = 0, S_Even, maxEven;
    int FirstS_Eeven = 1; // method called flag variable since we have not found any nb yet

    // Let user choose the numbers in the array
    printf("Enter the elements of a 10x3 array T: ");
    for (i = 0; i < 10; i++ ) {
        for (j = 0; j < 3; j++ ) {
            scanf("%i", &T[i][j]);
        }
    }

    // Max element of the array
    max = T[0][0];
    for (i = 0; i < 10; i++ ) {
        for (j = 0; j < 3; j++ ) {
            if ( T[i][j] > max )
                max = T[i][j];
        }
    }
    printf("The maximum element is %i\n", max);

    // Get the number of elements equal to the max in this array
     for (i = 0; i < 10; i++ ) {
        for (j = 0; j < 3; j++ ) {
            if ( T[i][j] == max )
                nb_max = nb_max + 1;
        }
    }

    // Sum of even numbers in each row of this array
    for ( i = 0; i < 10; i++ ) {
        S_Even = 0; // Since it must be reset to 0 for each row (once j = 1 ends, we loop back to i. Once j = 2 ends, we loop back to i, etc... till j=3)
        for (j = 0; j < 3; j++ ) {
            if ( T[i][j]%2 == 0 )
                S_Even = S_Even + T[i][j];
        }
        printf("The max nb of even elements of the row  %i is: %i\n", i, S_Even);
    }
    
    // The maximum of even elements in the array
    for (i = 0; i < 10; i++ ) {
        for (j = 0; j < 3; j++ ) {
            if ( T[i][j] % 2 == max ) { 
                if ( FirstS_Eeven || T[i][j] > maxEven ) {
                    maxEven = T[i][j];
                    FirstS_Eeven = 0;
                }
            }
        }
        printf("The max of even elements is; %i\n", maxEven);
    }

    int found = 0;
    for ( i = 0; i<10; i++ ) {
        
    }

    return 0;
}
