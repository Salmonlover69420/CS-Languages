#include <iostream>

using namespace std;

int count2(int n) {
    if (n == 1)
        return 0;
    return 1 + count2(n / 2);
}

void display_binary(int n) {
    if ()
    display_binary(n / 2);
    cout << n % 2;
}

int main() {
    int n;
    bool poweroftwo = true;
    do {
        cout << "enter n: ";
            cin >> n;

        do {
            if (n % 2 != 0) poweroftwo = false;
            n = n / 2;
        } while (n != 1); // not 0
    } while (poweroftwo == false);

    display_binary(count2(n));
}
