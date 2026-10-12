#include <iostream>

using namespace std;

int cnk(int n, int k);

int main() {
    int n, k;

    cout << "enter k: ";
    cin >> k;

    cout << "enter n: ";
    cin >> n;

    cout << cnk(n, k) << "\n";

    return 0;
}

int cnk(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else if (k > n)
        return 0;
    else
        return cnk(n - 1, k - 1) + cnk(n - 1, k);
}
