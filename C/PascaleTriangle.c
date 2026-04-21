// Lab 6, Ex 7
// row 0, 1 element; row 1, 2 elements; ...; row 4, 5 elements

# include <stdio.h>

int main() {
    int T[6][6];
    int i, j;
    
    // Filling the triangle
    for ( i = 0; i < 6; i++ ) {
        for ( j = 0; j <= i; j++ ) {
            if ( j == 0 || j == i ) // To replace 1 column and the diagonal
                T[i][j] = 1;
            else
                T[i][j] = T[i-1][j-1] + T[i-j][j];
        }
    }

    // Displaying the Triangle
    for ( i = 0; i < 6; i++) {
        for ( j = 0; )
    }

    return 0;
}