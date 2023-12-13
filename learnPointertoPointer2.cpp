#include <iostream>

int main() {
    int value = 42;
    int* ptr1 = &value;    // Pointer to an integer
    int** ptr2 = &ptr1;    // Pointer to a pointer to an integer

    // Dereferencing once to get the value of the pointer to an integer
    std::cout << "Value: " << *ptr1 << std::endl;
    std::cout << "Value: " << **ptr2<< std::endl;
    std::cout << "Value: " << *ptr2<< std::endl;
    std::cout << "Value: " << ptr2<< std::endl;
    std::cout << "Value: " << ptr1 << std::endl;

    return 0;
}
