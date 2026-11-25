#include <iostream>

using namespace std;

enum Light {
    RED,
    YELLOW,
    GREEN
};

int main() {
    Light currentLight = RED;

    switch (currentLight) {
        case RED:
            cout << "Stop!\n";
            break;
        case YELLOW:
            cout << "Slow down!\n";
            break;
        case GREEN:
            cout << "Go!\n";
            break;
    }

    return 0;
}