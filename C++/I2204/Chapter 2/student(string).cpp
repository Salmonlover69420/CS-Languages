/*
    A student is defined as follows :
    – last name
    – first name
    – age
    – address
    – GPA

    Write a program that:
    1. Stores the data for one student and display it if his GPA is < 3.
    2. Reads the data of 20 students
    3. Displays the information of a student given his first and last name
    4. Display the GPA average of all students.
*/

#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

struct student {
    string lastname;
    string firstname;
    string  address;
    int age;
    double gpa;
};

int main() {
    const int size = 3;
    student a, tab[size];

    cout << "enter the student last name";
    getline(cin, a.lastname);

    cout << "enter the student first name";
    getline(cin, a.firstname);

    cout << "enter the student address";
    getline(cin, a.address);

    cout << "enter the age";
    cin >> a.age;

    cout << "enter the GPA";
    cin >> a.gpa;

    cin.ignore(INT_MAX, '\n');

    if (a.gpa < 3) {
        cout << left << setw(15) << "Last Name" << setw(15) << "First Name" << setw(15) << "Address" << setw(10) << "Age" << "GPA" << endl;
        cout << setw(15) << a.lastname << setw(15) << a.firstname << setw(15) << a.address << setw(10) << a.age << showpoint << fixed << setprecision(2) << a.gpa << endl;
    }
    else
        cout << "gpa>3\n";

    for (int i = 0; i < size; i++) {
        cout << "enter the last name of student " << i + 1 << ":";
        getline(cin, tab[i].lastname);
        
        cout << "enter the nameof student " << i + 1 << ":";
        getline(cin, tab[i].firstname);
        
        cout << "enter the address of student " << i + 1 << ":";
        getline(cin, tab[i].address);
        
        cout << "enter the age";
        cin >> tab[i].age;
        
        cout << "enter the gpa";
        cin >> tab[i].gpa;
        
        cin.ignore(INT_MAX, '\n');
    }

    char fname[20], lname[20];
    
    cout << "enter the lname of the student to find in the array ";
    cin.getline(lname, 20);
    
    cout << "enter the fname of the student to find in the array ";
    cin.getline(fname, 20);

    int i;
    bool found = false;
    for (i = 0; i < size; i++) {
        if (tab[i].lastname == lname && tab[i].firstname == fname) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << left << setw(15) << "Last Name" << setw(15) << "First Name" << setw(15) << "Address" << setw(10) << "Age" << "GPA" << endl;
        cout << setw(15) << tab[i].lastname << setw(15) << tab[i].firstname << setw(15) << tab[i].address << setw(10) << tab[i].age << showpoint << fixed << setprecision(2) << tab[i].gpa << endl;
    }
    else
        cout << "Student not found";

    double s = 0;
    for (i = 0; i < size; i++)
        s += tab[i].gpa;
    
    cout << "the average is" << s / size;

    return 0;
}


