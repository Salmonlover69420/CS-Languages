#include <stdio.h>

float max_three(float x, float y, float z);

int main() {
    float x, y, z, maximum;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    maximum = max_three(x, y, z);

    printf("The maximum number is %f", maximum);

    return 0;
}

float max_three(float x, float y, float z) {
    float max = x;

    if (y > x && y > z )
        return y;
    if (z > y && z > x ) 
        return z;
    return x;
}
