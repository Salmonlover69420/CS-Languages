/*
    Chaging the values of the data in the struct. (Cannot be done with passing by value, similar to Swap.cpp)
*/

#include <iostream>

using namespace std;

struct  record {
    int a;
    float b;
};

int main() {
    record x;

    void fctRef(record &y);
    void fctPtr(record *);

    x.a = 1;
    x.b = 12.5;

    cout << "Before calling fct: " << x.a << " " << x.b << '\n';
    fctRef(x);
    // fctPtr(&x);
    cout << "Returning to main: " << x.a << " " << x.b << '\n';

    return 0;
}

void fctRef(record &s) {
    s.a = 0;
    s.b = 1;

    cout << "In fct: " << s.a << " " << s.b << '\n';
}

void fctPtr(record *s) {
    s->a = 0;
    s->b = 1;

    cout << "In fct: " << s->a << " " << s->b << '\n';
}
