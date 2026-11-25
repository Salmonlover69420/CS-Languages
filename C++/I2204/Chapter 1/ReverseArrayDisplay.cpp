/* 
Write a recursive function that displays the reverse of an array of n characters
*/

#include <iostream>
using namespace std;

void display_it(char tab[], int n);
void display_rec(char tab[], int n);

int main() {
    char tab[100];
    int n;

    do {
        cout << "Enter the size of the array: ";
        cin >> n;
    } while (n <= 0 || n > 100);

    cout << "Enter the elements of the array: \n";

    for (int i = 0; i < n; i++)
        cin >> tab[i];

    display_it(tab, n);
    cout << "\n";
    display_rec(tab, n);
    cout << "\n";

    return 0;
}

void display_it(char tab[], int n) {
    for (int i = n - 1; i >= 0; i--) // reverse of for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
}

void display_rec(char tab[], int n) {
    if (n == 1)
        cout << tab[0] << " ";
    else {
        cout << tab[n - 1] << " "; // this before the display_rec reverses it
        display_rec(tab, n - 1);
    }
}
