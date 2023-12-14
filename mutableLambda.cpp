#include <iostream>

int main() {
    int x = 5;

    // Lambda capturing 'x' by value and modifying it using 'mutable'
    auto lambda = [x]() mutable {
        x = 10;  // This modification is allowed because of 'mutable'
        std::cout << "Inside lambda: " << x << std::endl;
    };

    lambda();  // Call the lambda
    std::cout << "Outside lambda: " << x << std::endl;

    return 0;
}
