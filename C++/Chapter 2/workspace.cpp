/*
A book is defined by:
Title, Author, Editor, Edition, and Cost
Write a program that inputs the data relative to N books and displays on the screen a menu offering the following choices:
1 - Display the titles of all the books written by a given author (Ask the user to input the author name)
2 - Output the total cost of the books
3 - Output the books of edition = 2
4 - Exit
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct book {
    string Title, Author, Editor;
    int Edition;
    float Cost;
};

void MainInput();

int main() {
    int N, choice;
    book Book[30];
    string ChosenAuthor;

    do {
        cout << "Enter the number of books: ";
        cin >> N;
    } while (N <= 0 || N > 30);

    cin.ignore(INT_MAX, '\n');

    for (int i = 0; i < N; i++) {
        cout << "Enter the Books's title: ";
        getline(cin, Book[i].Title); // why does cin.getline(Book[i].Title, N, '\n') overflow?

        cout << "Enter the Author's name: ";
        getline(cin, Book[i].Author);

        cout << "Enter the Editor's name: ";
        getline(cin, Book[i].Editor);

        cout << "Enter the Book's Edition: ";
        cin >> Book[i].Edition;

        do {
            cout << "Enter the Book's cost: ";
            cin >> Book[i].Cost;
        } while (Book[i].Cost < 0);

        cin.ignore(INT_MAX, '\n');
    }

    do {
        cout << "Choose from 1 to 4: \n";
        cout << "1. View books of a certain author\n2. Total cost of inputted books\n3. Output the books of edition 2\n4. Exit\n";
        cin >> choice;
    } while (choice < 1 || choice > 4);

    cin.ignore(INT_MAX, '\n');

    switch (choice) {
        case 1:
            cout << "Enter the name of the Author whose books you wish to see: ";
            getline(cin, ChosenAuthor);

            cout << left << setw(20) << "Title:" << setw(20) << "Author:" << setw(20) << "Editor:" << setw(20) << "Edition:" << setw(10) << "Cost:" << '\n';
            for (int i = 0; i < N; i++) {
                if (Book[i].Author == ChosenAuthor) {
                    cout << left << setw(20) << Book[i].Title << setw(20) << Book[i].Author << setw(20) << Book[i].Editor << setw(20) << Book[i].Edition << setw(10) << Book[i].Cost << '\n';
                }
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }



    // cout << left << setw(20) << "Title:" << setw(20) << "Author:" << setw(20) << "Editor:" << setw(20) << "Edition:" << setw(10) << "Cost:" << '\n';
    // for (int i = 0; i < N; i++) {
    //     cout << left << setw(20) << Book[i].Title << setw(20) << Book[i].Author << setw(20) << Book[i].Editor << setw(20) << Book[i].Edition << setw(10) << Book[i].Cost << '\n';
    // }

    return 0;
}

void MainInput() {

}
