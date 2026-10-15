// Creates and then sorts a vector
#include <iostream>
#include <vector>
#include <algorithm> // for sort()
#include <cstdlib> // for rand() and srand() (optional to include, some compilers indirectly use this library from iostream)
#include <ctime> // for time() (optional to include, some compilers indirectly use this library from iostream)
#include <functional> // for greater<int> and less<int> (optional to include, some compilers indirectly use this library from iostream)

using namespace std;

typedef vector<int> vi; // so that you can write vi instead of vector<int>

void display(vi v);
bool comp1(int x, int y);
bool comp2(int x, int y);

int main() {
    int n = 10, x;

    vi v;

    srand(time(0)); // initializes random number generator using the current time (time 0)

    for (int i = 0; i < n; i++) {
        x = rand() % 100; // rand generates a random int, % 100 calculates remainded after dividing the int by 100, so 0 <= x <= 99
        v.push_back(x); // adds the int to the end of the vector
    }

    cout << "Base vector: ";
    display(v);

    // sort from lowest to highest: (3 methods)
    // Using default sort
    sort(v.begin(), v.end());
    cout << "Lowest to Highest: ";
    display(v);
    // OR (using less<int>)
    sort(v.begin(), v.end(), less<int>());
    cout << "Lowest to Highest: ";
    display(v);
    // OR (using a fct)
    cout << "Lowest to Highest: ";
    sort(v.begin(), v.end(), comp1);
    display(v);


    // sort from highest to lowest: (2 methods)
    // using greater<int>
    cout << "Highest to Lowest: ";
    sort(v.begin(), v.end(), greater<int>());
    display(v);
    // OR (using a fct)
    cout << "Highest to Lowest: ";
    sort(v.begin(), v.end(), comp2);
    display(v);


    // THIS BELOW IS WRONG; CANNOT BEGIN WITH END() AND END WITH BEGIN())
    // sort(v.end(), v.begin());
    // cout << "Highest to Lowest: ";
    // display(v);

    return 0;
}

void display(vi v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

bool comp1(int x, int y) {
    return x < y;
}

bool comp2(int x, int y) {
    return x > y;
}
