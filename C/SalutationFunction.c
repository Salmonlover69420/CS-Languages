#include <stdio.h>

void salutation(char name[]);

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", &name);

    salutation(name);

    return 0;
}

void salutation(char name[]) {

    printf("Hello, %s", name);
}
