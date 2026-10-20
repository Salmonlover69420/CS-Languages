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

int BookCount();
void MainInput(int N, book Book[]);
int Menu();
bool isEqual(string a, string b);
void ShowByAuthor(int N, book Book[]);
void Header();
void DisplayBook(book b);
void TotalCost(int N, book Book[]);
void Edition(int N, book Book[]);

int main() {
    book Book[30];
    int N = BookCount();

    MainInput(N, Book);

    int choice;
    do {
        choice = Menu();
        switch (choice) {
        case 1: ShowByAuthor(N, Book);
            break;
        case 2: TotalCost(N, Book);
            break;
        case 3: Edition(N, Book);
            break;
        case 4:
            break;
        }
    } while (choice != 4);

    return 0;
}

int BookCount() {
    int n;
    do {
        cout << "Enter the number of books: ";
        cin >> n;
    } while (n <= 0 || n > 30);

    cin.ignore(INT_MAX, '\n');

    return n;
}

void MainInput(int N, book Book[]) {
    for (int i = 0; i < N; i++) {
        cout << "Enter the Books's title: ";
        getline(cin, Book[i].Title);

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
}

int Menu() {
    int choice;
    do {
        cout << "{{--Choose from 1 to 4:--}}\n";
        cout << "1. View books of a certain author\n2. Total cost of inputted books\n3. Output the books of edition 2\n4. Exit\n";
        cin >> choice;
    } while (choice < 1 || choice > 4);

    cin.ignore(INT_MAX, '\n');

    return choice;
}

void Header() {
    cout << left << setw(20) << "Title:" << setw(20) << "Author:" << setw(20) << "Editor:" << setw(10) << "Edition:" << setw(10) << "Cost:" << '\n';
}

void DisplayBook(book b) {
    cout << left << setw(20) << b.Title << setw(20) << b.Author << setw(20) << b.Editor << setw(10) << b.Edition << setw(10) << b.Cost << '\n';
}

bool isEqual(string a, string b) {
    return a == b;
}

void ShowByAuthor(int N, book Book[]) {
    string author;

    cout << "Enter the author's name: ";
    getline(cin, author);

    Header();

    bool found = false;
    for (int i = 0; i < N; ++i)
        if (isEqual(Book[i].Author, author)) {
            DisplayBook(Book[i]);
            found = true;
        }
    if (!found)
        cout << "No books by that author.\n";
}

void TotalCost(int N, book Book[]) {
    float total = 0;
    for (int i = 0; i < N; ++i) 
        total += Book[i].Cost;

    cout << "The total cost of all books is: " << total << '\n';
}

void Edition(int N, book Book[]) {
    bool found = false;
    for (int i = 0; i < N; ++i) {
        if (Book[i].Edition == 2) {
            if (!found) {
                cout << left << setw(20) << "Title:" << '\n';
                found = true;
            }
            cout << left << setw(20) << Book[i].Title << '\n';
        }
    }
    if (!found) cout << "No books of edition 2.\n";
}
