// Makes a vector of random elements between 0 and 99 (0, 99 included) then erases index 2 and displays the new vector
#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> v);

int main() {
    int n = 10, x;

    vector<int> v;

    srand(time(0)); // initializes random number generator using the current time (time 0)

    for (int i = 0; i < n; i++) {
        x = rand() % 100; // rand generates a random int, % 100 calculates remainded after dividing the int by 100, so 0 <= x <= 99
        v.push_back(x); // adds the int to the end of the vector
    }

    display(v);

    v.erase(v.begin() + 2);  // v.begin points to the first element (at 1st index) of the vector, + 2 points to index 2, erase removes the element at index 2

    display(v); // displays the vector after erasure

    return 0;
}

void display(vector<int> v) {
    for (auto x:v) {
        cout << x << " ";
    }
    cout << endl;
}
