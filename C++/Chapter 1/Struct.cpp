#include <iostream>
#include <iomanip>

using namespace std;

struct Student {
    char lastName[20];
    char firstName[20];
    char address[30];

    int age;
    float gpa;
};

int main() {
    Student Student1;

    cout << "Enter the student's last name: ";
    cin.getline(Student1.lastName, 20, '\n'); // dont use "\n", use '\n'

    cout << "Enter the student's first name: ";
    cin.getline(Student1.firstName, 20, '\n');

    cout << "Enter the address: ";
    cin.getline(Student1.address, 20, '\n');

    cout << "Enter the age: ";
    cin >> Student1.age;

    cout << "Enter the gpa: ";
    cin >> Student1.gpa;

    if (Student1.gpa < 3) {
        cout << left << setw(20) << "Last name" << setw(20) << "First name" << setw(30) << "Address" << setw(10) << "Age" << "GPA\n"; 
        cout << setw(20) << Student1.lastName << setw(20) << Student1.firstName << setw(30) << Student1.address << setw(10) << Student1.age << Student1.gpa << endl;
    }
    else
        cout << "nebgha" << endl;
}

// Using string:
/*

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    string lastName;
    string firstName;
    string address;

    int age;
    float gpa;
};

int main() {
    Student Student1;

    cout << "Enter the student's last name: ";
    getline(cin, Student1.lastName);

    cout << "Enter the student's first name: ";
    getline(cin, Student1.firstName);
    cout << "Enter the address: ";
    getline(cin, Student1.address);
    cout << "Enter the age: ";
    cin >> Student1.age;

    cout << "Enter the gpa: ";
    cin >> Student1.gpa;

    if (Student1.gpa < 3) {
        cout << left << setw(20) << "Last name" << setw(20) << "First name" << setw(30) << "Address" << setw(10) << "Age" << "GPA\n";
        cout << setw(20) << Student1.lastName << setw(20) << Student1.firstName << setw(30) << Student1.address << setw(10) << Student1.age << Student1.gpa << endl;
    }
    else
        cout << "nebgha" << endl;
}

*/