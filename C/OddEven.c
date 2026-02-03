#include <stdio.h>
int main() {
    int a;

    printf("Enter an integer a:\n5");
    scanf(" %i", &a);

    if (a%2 == 0) printf("The number is even.");
    else printf("The number is odd.");

    return 0;
}