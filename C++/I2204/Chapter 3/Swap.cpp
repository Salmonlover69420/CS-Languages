/*
    This demonstrates how passing by reference (using &var) is ideal compared to passing by value (not using &var).
    
    - Passing by value:
    Creates a copy of the variables and does not modify the original ones, thus it does not swap x & y

    - Passing by reference: 
    Modifies the original variables and thus swaps x & y. 
    Cannot be null or assigned to a diff object.
    Accessing a member is with the dot operator book.title

    - Passing by pointer:
    Similar to by ref, but it can be nullptr and can be assigned to a diff object. 
    Accessing a member is with the arrow operator book->title

    Thus when using functions, it is ideal to always use passing by reference unless you intend on making a copy of a variable. 
*/

#include <iostream>

using namespace std;

void swap(string &x, string &y); // if you do not pass by reference (as in, dont use &) the swap wont work
void SwapPtr(string *, string *);

int main() {
    string x = "potato";
    string y = "cucumber";

    cout << "Original x: " << x << "\n"; // potato
    cout << "Original y: " << y << "\n"; // cucumber

    swap(x, y);

    cout << "New x: " << x << "\n"; // cucumber
    cout << "New y: " << y << "\n"; // potato

    SwapPtr(&x, &y);

    cout << "New x: " << x << "\n"; // potato
    cout << "New y: " << y << "\n"; // cucumber

    return 0;
}

void swap(string &x, string &y) { // if you do not pass by reference (as in, dont use &) the swap wont work
    string temp;

    temp = x;
    x = y;
    y = temp;
}

void SwapPtr(string *x, string *y) {
    string temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
