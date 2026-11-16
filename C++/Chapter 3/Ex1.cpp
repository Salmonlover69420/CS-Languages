#include <iostream>

using namespace std;

int main() {
    short a[32], *p;
    p = a;

    for (int i = 0; i < 32; i++) {
        *p++ = 32;
    } // to check

    char *s1 = "xx";
    char *s2 = "yy";

    strcpy(s1, s2); // this will error out (concept wrong, some compilers let it pass), u must do const char *s not just char *s above

    return 0;
}
