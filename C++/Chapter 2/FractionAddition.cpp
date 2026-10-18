/*
Code that asks the user to input two fractions, adds them, and simplifies them if possible
*/

#include <iostream>

using namespace std;

struct rational {
    int num, den;
};

rational sum(rational r1, rational r2);
rational div(rational r1, rational r2);
int gcd(int a, int b);
void reduce(rational& r);
void input(rational& r);
void output(rational r);



int main() {
    rational r1, r2, r;

    input(r1);
    input(r2);

    r = sum(r1, r2);
    reduce(r);

    cout << "Sum = ";
    output(r);

    r = div(r1, r2);
    reduce(r);

    cout << "Division = ";
    output(r);

    return 0;
}

rational sum(rational r1, rational r2) {
    rational r;

    r.num = r1.num * r2.den + r1.den * r2.num;
    r.den = r1.den * r2.den;

    return r;
}

rational div(rational r1, rational r2) {
    rational r;

    r.num = r1.num * r2.den;
    r.den = r1.den * r2.num;

    return r;
}

int gcd(int a, int b) {
    int temp;

    while (a != b) {
        if (a < b) {
            temp = a;
            a = b;
        }
    }

    return a;
}

void reduce(rational& r) { // passing by reference
    int d = gcd(r.num, r.den);

    r.num /= d;
    r.den /= d;
}

void input(rational& r) {
    cout << "Enter the numerator: ";
    cin >> r.num;

    do {
        cout << "Enter the denominator: ";
        cin >> r.den;
    } while (r.den == 0);
}

void output(rational r) {
    if (r.den < 0) {
        r.num = -r.num;
        r.den = -r.den;
    }
    if (r.den == 1)
        cout << r.num << endl;
    else
        cout << r.num << "/" << r.den << endl;
}
