#include <stdio.h>

int main () {
    float weight, size, IMC, sizecm;
    char sex;

    printf("Enter your weight (kg), size (m), and sex (M or F): ");
    scanf("%f %f %c", &weight, &size, &sex);

    IMC = weight/(size*size);

    printf("Your IMC is: %.2f \n", IMC);

    if ( IMC < 20 ) {
        printf("You are underweight.");
    }
    else if ( IMC < 25 ) printf("Your weight is normal.");
    else if (IMC < 30 ) printf("Your result is abnormal.");
    else printf("You are obese.");

    sizecm = size*10*10;

    if ( sex == 'M' ) {
        printf("The ideal weight is %f\n", sizecm - 100 - ((sizecm - 150)/4) );
    }
    else if ( sex == 'F' ) {
        printf("The ideal weight is %f\n", sizecm - 100 - ((sizecm - 150)/2) );       
    }
    else {
        printf("Sex must be either M or F.");

        return 1;
    }

    return 0;
}
