#include <iostream>

using namespace std;

int main() {
    // 1. Non-const reference bound to a literal
    int &r = 22;          // ERROR: A non-const lvalue reference cannot bind to a literal (rvalue).
    // Fix: const int& r = 22;  OR  int x = 22; int& r = x;

    // 2. Taking the address of a literal
    int *p = &44;         // ERROR: Literals have no memory address; '&' requires a variable (lvalue).
    // Fix: int x = 44; int* p = &x;

    // 3. Storing an address inside a non-pointer variable
    char c = 'w';
    char p = &c;          // ERROR: Type mismatch. '&c' is a pointer (char*), while 'p' is a plain char.
    // Fix: char* p = &c;

    // 4. Storing a character value inside a pointer variable
    char c = 'w';
    char *p = c;          // ERROR: Type mismatch. 'c' is a char ('w'), not a memory address (char*).
    // Fix: char* p = &c;

    // 5. Incrementing an array name
    short a[32];
    for (int i = 0; i < 32; i++)
        *a++ = i * i;     // ERROR: An array name 'a' is not a modifiable lvalue and cannot be incremented.
    // Fix: *(a + i) = i * i;  OR  a[i] = i * i;

    // 6. Modifying read-only string literals
    char *s1 = "xx";      // ERROR (C++11+): String literals are const char[] and cannot be assigned to char*.
    char *s2 = "yy";
    strcpy(s1, s2);       // ERROR (Crash / Undefined Behavior): Writing into read-only memory.
    // Fix: char s1[] = "xx"; const char* s2 = "yy"; strcpy(s1, s2);

    // 7. Adding two pointers together
    int *p = new int;
    int *q = new int;
    cout << "p = " << p << ", p + q = " << p + q << endl; // ERROR: Invalid operands to binary '+'.
    // Two pointers cannot be added together (only pointer + int or pointer - pointer).

    return 0;
}
