// ConsoleApplication165.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct rational {
    int num, den;
};
rational sum(rational r1, rational r2) {
    rational r;
    r.num = r1.num * r2.den + r1.den * r2.num;
    r.den = r1.den*r2.den;
    return r;
}
rational diff(rational r1, rational r2) {
    rational r;
    r.num = r1.num * r2.den - r1.den * r2.num;
    r.den = r1.den * r2.den;
    return r;
}
rational mult(rational r1, rational r2) {
    rational r;
    r.num = r1.num * r2.num;
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
    int tmp;
    while (a != b) {
        if (a < b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        a = a - b;
    }

    return a;
}
void reduce(rational & r) {
    int d = gcd(r.num, r.den);
    r.num /=d;
    r.den /=d;
}
void input(rational& r) {
    cout << "enter the numerator";
    cin >> r.num;
    do {
        cout << "enter the denominator";
        cin >> r.den;
    }while(r.den == 0);

}
void output(rational r) {
    if (r.den < 0) {
        r.num = -r.num;
        r.den = -r.den;
    }
    if (r.den == 1)
        cout << r.num<<endl;
    else
        cout << r.num << "/" << r.den << endl;
}
int main()
{
    rational r1, r2, r;
    input(r1);
    input(r2);
    r = mult(r1, r2);
    output(r);
    reduce(r);
    output(r);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
