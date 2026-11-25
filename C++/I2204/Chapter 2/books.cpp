/*
A book is defined by:
Title, Author, Editor, Edition, and Cost
Write a program that inputs the data relative to (with respect to) N books and displays on the screen a menu offering the following choices:
1 - Display the titles of all the books written by a given author(Ask the user to input the author name)
2 - Output the total cost of the books
3 - Output the books of edition = 2
4 - Exit
*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct book {
	string title, author, editor;
	int edition;
	float cost;
};

int main() {
	int n, choice;
	book books[30];
	char author[25];
	float total;

	do {
		cout << "Enter the number of books: ";
		cin >> n;
	} while (n <= 0 || n > 30);

	cin.ignore(INT_MAX, '\n');

	for (int i = 0; i < n; i++) {
		cout << "Enter book title: " /*<< i + 1*/;
		getline(cin, books[i].title);

		cout << "Enter author name: ";
		getline(cin, books[i].author);

		cout << "Enter editor name: ";
		getline(cin, books[i].editor);

		cout << "Enter book edition: ";
		cin >> books[i].edition;

		cout << "Enter book cost: ";
		cin >> books[i].cost;
		cin.ignore(INT_MAX, '\n');
	}

	do {
		cout << "1. Show all books written by a given author name." << endl;
		cout << "2. Show the total cost of all books." << endl;
		cout << "3. Show the books of 2nd edition." << endl;
		cout << "4. Exit." << endl;

		cout << "enter your choice:";
		cin >> choice;

		switch (choice) {
			case 1:
				cout << "Enter the author name: ";
				cin >> author;
				cout << left << setw(10) << "title" << setw(10) << "Author" << setw(10) << "Editor" << setw(10) << "Edition" << "Cost" << endl;
				for (int i = 0; i < n; i++)
					if (books[i].author == author)
						cout << left << setw(10) << books[i].title << setw(10) << books[i].author << setw(10) << books[i].editor << setw(10) << books[i].edition << books[i].cost << endl;
				break;
			case 2:
				total = 0;
				for (int i = 0; i < n; i++)
					total += books[i].cost;
				cout << "the total cost is" << total << endl;
				break;
			case 3: 
				cout << left << setw(10) << "title" << setw(10) << "Author" << setw(10) << "Editor" << setw(10) << "Edition" << "Cost" << endl;
				for (int i = 0; i < n; i++)
					if (books[i].edition == 2)
						cout << left << setw(10) << books[i].title << setw(10) << books[i].author << setw(10) << books[i].editor << setw(10) << books[i].edition << books[i].cost << endl;
				break;

		}
	} while (choice != 4);
	
	system("pause");

	return 0;
}
