/*
'new' operator is used to allocate memory in heap instead of stack.
Useful if dont how much memory is needed.
Adds flexibility to the program.
Use 'del' (and reset ptr to nullptr)
*/

#include <iostream>

using namespace std;

int main() {
    int *pNum = nullptr; // or less preferably, NULL

    pNum = new int; // 'new' operator dynamically allocates memory for an int & returns a ptr to that allocated mem. We store that address in pNum.

    *pNum = 21; // The deref operator * accesses the object that the pointer points to. We assign 21 to that int object.

    cout << "address: " << pNum << "\n";
    cout << "value: " << *pNum << "\n";

    // When you're done with the memory space (after creating with new and using it), delete it.

    delete pNum; // releases the dynamically allocated memory previously obtained using new, to avoid memory leaks
    pNum = nullptr; // Resets the pointer so it doesn't hold the old address


    // Example:
    /* 
    instead of arbitrarily putting it as char pGrades[100] (100 for example) then asking user to input size, 
    it is dynamically allocated as he enters the size
    */

    char *pGrades = nullptr; // or less preferably, NULL
    int size;
    
    cout << "Enter the amount of grades: " << '\n';
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter grade number: " << i + 1 << '\n';
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;
    pGrades = nullptr; // or less preferably, NULL

    // Note: for the example above, the best way is by using vectors instead of char and dynamic memory

    return 0;
}
