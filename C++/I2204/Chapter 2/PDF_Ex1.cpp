// know difference between: 
// cin >> var; => Reads one word/value, stops at space, stores '\n' in buffer (Input: John Doe -> Takes: John)
// cin.getline(Object.var, Size, '\n') => Reads up to Size-1, including white space (dont use "\n" (string literal) use '\n' (a character))
// getline(cin, var) reads entire line, including white space, doesnt require size
// cin.ignore(INT_MAX, '\n') discards input stored in buffer (ex: Doe from cin >> var) so that it doesnt carry over to the next input

/*
    A student is defined as follows:
    – Last name
    – First name
    – Age
    – Address
    – GPA

    Write a program that:
        1. Store the student data and display it if his GPA is < 3.
        2. Read the data of 20 students
        3. Display the information of a student given his first and last name
        4. Display the GPA average of all students.
*/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct student {
    char fname[20];
    char lname[20];
    char address[30];
    int age;
    float gpa;
};

int main() {
    const int size = 20;
    int index;
    float s, avg;
    student Students[100];
    bool found = false;

    char FirstName[20];
    char LastName[20];

    // do {
    //     cout << "Enter the amount of students: ";
    //     cin >> size;
    // } while (size <= 0 || size > 100);

    for (int i = 1; i <= size; i++) {
        cout << "Enter the information of student " << i << ":\n";

        cout << "First Name: ";
        cin >> Students[i].fname;

        cout << "Last Name: ";
        cin >> Students[i].lname;

        cout << "Age: ";
        cin >> Students[i].age;

        cin.ignore(INT_MAX, '\n');

        cout << "Address: ";
        cin.getline(Students[i].address, 30, '\n');

        cout << "GPA (0 to 4): ";
        cin >> Students[i].gpa;

        cin.ignore(INT_MAX, '\n');
    }

    cout << '\n';


    cout << "Students whose GPA is less than 3/4:\n";
    cout << left << setw(10) << "First Name" << setw(20) << "Last Name" << setw(20) << "Age" << setw(10) << "Address" << setw(30) << "GPA" << '\n';
    for (int i = 1; i <= size; i++) {
        if (Students[i].gpa < 3) {
            cout << left << setw(10) << Students[i].fname << setw(20) << Students[i].lname << setw(20) << Students[i].age << setw(10) << Students[i].address << setw(30) << Students[i].gpa << '\n';
        }
    }

    cout << "Enter the First Name of the student you're searching for: ";
    cin >> FirstName;

    cout << "Enter the Last Name of the student you're searching for: ";
    cin >> LastName;

    for (int i = 1; i <= size; i++) {
        if (strcmp(Students[i].fname, FirstName) == 0 && strcmp(Students[i].lname, LastName) == 0) {
            found = true;
            index = i;

            break;
        }
    }

    if (found) {
        cout << left << setw(10) << Students[index].fname << setw(20) << Students[index].lname << setw(20) << Students[index].age << setw(10) << Students[index].address << setw(30) << Students[index].gpa << '\n';
    }
    else {
        cout << "Student not found!" << '\n';
    }

    for (int i = 1; i <= size; i++) {
        s += Students[i].gpa;
    }

    avg = (float)s / (float)size;

    cout << "The average GPA of all students is: " << avg << '\n';

    return 0;
}
