/*
This demonstrates how passing by reference (using &var) is ideal compared to passing by value (not using &var).
Passing by value creates a copy of the variables and does not modify the original ones, thus it does not swap x & y
Passing by reference modifies the original variables and thus swaps x & y.
Passing by pointer (WIP)

Thus when using functions, it is ideal to always use passing by reference unless you intend on making a copy of a variable. 
*/

#include <iostream>

using namespace std;

void swap(string &x, string &y); // if you do not pass by reference (as in, dont use &) the swap wont work

int main() {
    string x = "potato";
    string y = "cucumber";

    cout << "Original x: " << x << "\n";
    cout << "Original y: " << y << "\n";

    swap(x, y);

    cout << "New x: " << x << "\n";
    cout << "New y: " << y << "\n";

    return 0;
}

void swap(string &x, string &y) { // if you do not pass by reference (as in, dont use &) the swap wont work
    string temp;

    temp = x;
    x = y;
    y = temp;
}
