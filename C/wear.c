#include <stdio.h>

int main() {
    char temp;

    printf("Is enter c (cold), w (warm), or o (other)\n");
    scanf(" %c", &temp);

    if (temp == 'c' ) {
        printf("Wear a coat.");
    }
    else if (temp == 'w')
        printf("Wear a t-shirt.");
    else if (temp == 'o')
        printf("Wear a sweatshirt.");
    else {
        printf("Error, please choose warm, cold, or other.");

        return 1;
    }

    return 0;
}