#include <stdio.h>

int main() {
    int y;

    printf("Enter the year: ");
    scanf("%i", &y);

    if (y < 0) {
        printf("The year must be positive.");

        return 1;
    }
    else {
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
            printf("%i is a leap year.", y);
        }
        else printf("%i is not a leap year.", y);
    }



    return 0;
}
