// know difference between: 
// cin >> var; => Reads one word/value, stops once it sees a space (Input: John Doe -> Stores: John)
// cin.getline(Object.var, Size, '\n' ) (dont use "\n" (string literal) use '\n' (a character) ) => does not stop at white space and takes size number of characters inputted
// getline(cin, var) puts entire line inside a string, doesnt need a buffer size
// cin.ignore(INT_MAX) discards input stored in buffer (ex: Doe from cin >> var) so that it doesnt carry over to the next input

// STRING VER INSTEAD OF USING CHAR DATATYPES (string lastName instead of char lastName[20], etc etc)

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student {
    string lastName;
    string firstName;
    string address;

    int age;
    float gpa;
};

int main() {
    int n;
    Student tab[100];

    do {
        cout << "Enter the size of the database: ";
        cin >> n;
    } while (n <= 0 || n > 100);

    for (int i = 0; i < n; i++) {
        cout << "Enter the student's last name: ";
        cin >> tab[i].lastName;

        cout << "Enter the student's first name: ";
        cin >> tab[i].firstName; // instead of cin.getline(tab[i].address, 20, '\n') without the loop

        cin.ignore(INT_MAX, '\n'); // not "\n", doing this to clear buffer (especially leftover new line from when the user clicks enter in first and last name, which is a \n)
        // we do ignore here since getline below WILL take the \n, cin automatically skips it so no need to put one between cin >> ... lastName and the first name input
        cout << "Enter the address: ";
        // cin.getline(tab[i].address, 30, '\n'); // this is now wrong since address is a string, you cannot determine a size
        getline(cin, tab[i].address);

        cout << "Enter the age: ";
        cin >> tab[i].age;

        cout << "Enter the gpa: ";
        cin >> tab[i].gpa;

        cin.ignore(INT_MAX, '\n'); // not "\n"
    }

    cout << left << setw(20) << "First name" << setw(20) << "Last name" << setw(30) << "Address" << setw(10) << "Age" << "GPA\n";
    for (int i = 0; i < n; i++) {
        cout << setw(20) << tab[i].firstName << setw(20) << tab[i].lastName << setw(30) << tab[i].address << setw(10) << tab[i].age << tab[i].gpa << endl;
    }
    string fname, lname;

    cout << "Enter the first name of the student you want to find: ";
    getline(cin, fname);

    cout << "Enter the last name of the student you want to find: ";
    getline(cin, lname);

    bool found = false;
    float sum = 0;
    int index = -1; // by default no index available to copy from array

    for (int i = 0; i < n; i++)
        // if (tab[i].firstName == fname && tab[i].lastName == lname) { // this is wrong since firstName and lastName are char arrays and fname, lname are strings
        //use strcmp from cstring library
        if (tab[i].firstName == fname && tab[i].lastName == lname) {
            found = true;
            index = i; // takes the index in the array and stores it for later use (to print out the info of the student)
            break;
        }
    if (found) {
        cout << setw(20) << tab[index].firstName << setw(20) << tab[index].lastName << setw(30) << tab[index].address << setw(10) << tab[index].age << tab[index].gpa << endl;
    }
    else
        cout << "Student not found" << "\n";

    for (int i = 0; i < n; i++) {
        sum += tab[i].gpa;
    }
    cout << "Average GPA = " << sum / (float)n << endl;

    return 0;
}
