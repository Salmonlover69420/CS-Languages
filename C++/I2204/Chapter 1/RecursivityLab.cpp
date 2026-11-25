#include <iostream>

using namespace std;

int count(int tab[], int n, int p) {
    int c = count(tab, n - 1, p);

    if (p == 0)
        return 0;

    if (p == tab[n - 1])
        c += 1;

    return c;
}
