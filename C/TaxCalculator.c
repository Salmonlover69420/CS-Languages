#include <stdio.h>

int main() {

    int nb;
    float ht, ttc;
    float VAT = 11;

    printf("Enter the number of books and their cost: ");
    scanf("%i %f", &nb, &ht);

    ttc = nb * ht * (1+VAT/100.0);

    printf("The total price after tax of %i books is %.2f: ", nb, ttc);

    return 0;
}
