#include <iostream>

using namespace std;

int main() {
    // ....
}

double power(int x, int n) {
    double res;

    if (n == 1)
        return x;
    if (n%2 == 0) { // if power even: ex: 3^4, can do (3^2)^2
        res=power(x,n/2);

        return res * res;
    }
    else { // if power odd: ex: 3^5, can do 3 * (3^2)^2
        res = power(x, n/2);

        return x * res * res;
    }
}
