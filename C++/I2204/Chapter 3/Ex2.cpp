#include <iostream>

using namespace std;

int main() {
    // a. An array of 8 floats
    float a[8];

    // b. An array of 8 pointers to float ([] binds tighter than *)
    float *b[8];

    // c. A pointer to an array of 8 floats (parentheses bind * to c first)
    float (*c)[8];

    // d. A pointer to an array of 8 pointers to float
    float *(*d)[8];

    // e. A function that returns a float
    float e();

    // f. A function that returns a pointer to a float (() binds tighter than *)
    float *f();

    return 0;
}
