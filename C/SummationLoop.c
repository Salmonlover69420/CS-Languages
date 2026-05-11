// Write a program that sums 1 + 2 + .... + n (n is inputted by the user)

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("The summation from 1 to %d is: %d\n", n, sum);

    return 0;
}

/* Or use while loop:
#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;

    printf("Enter the final integer of the summation: ");
    scanf("%i", &n);

    while (i <= n ) {
        sum += i;
        i++;
    }

    printf("The summation of integers from 1 to %i is %i\n", n, sum);

    return 0;
}
*/

/* Or use do-while loop
#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;

    printf("Enter the final integer to be added: ");
    scanf("%i", &n);

    do {
        sum += i;
        i++;
    } while (i <= n );

    printf("The sum of numbers from 1 to %i is %i", n, sum);

    return 0;
}
*/