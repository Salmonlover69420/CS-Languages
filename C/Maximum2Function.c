#include <stdio.h>

float max_two(float x, float y);

int main() {
    float x, y, maximum;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    maximum = max_two(x, y);

    printf("The maximum is %f", maximum);

    return 0;
}

float max_two(float x, float y) {
    float maximum;
    if (x > y) {
        return x;
    }
    else return y;

}
