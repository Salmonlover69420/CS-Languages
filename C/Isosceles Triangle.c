# include <stdio.h>
int main() {
    int height = 5;
    for (int i = 1; i<= height; i++) {
        for (int space = 1; space<= height -i; space++) {
            printf(" ");
        }
        for (int star = 1; star<= (2*i -1); star++) {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}
 /* OR
 #include <stdio.h>

int main() {
    int i, j, space;

    for ( i = 0; i < 5; i++ ) {
        for ( space = 5; space > i; space-- ) {
            printf(" ");
        }
        for ( j = 0; j < 2*i + 1; j++ ) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
 */
