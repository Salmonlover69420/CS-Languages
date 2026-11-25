#include <iostream>

int main() {
    int Age = 20;
    int *pAge = &Age;

    std::cout << Age << '\n';
    std::cout << *pAge << '\n';
    std::cout << pAge << '\n';

    int *pointer = nullptr; // nullptr makes the pointed var point to nothing (has no address)

    pointer = &Age; // Makes the pointer point to Age. NOTE: It is not *pointer = &Age;

    if (pointer == nullptr) {
        std::cout << "Address failed to be assigned (pointer has no address)\n";
        // std::cout << *pointer << '\n'; // do NOT do this, will result in undefined behavior since there's no address.
    }
    else {
        std::cout << "Address was assigned";
        std::cout << pointer << '\n'; // prints address of Age which is also the address of pointer
        std::cout << *pointer << '\n';
    }
    return 0;
}
