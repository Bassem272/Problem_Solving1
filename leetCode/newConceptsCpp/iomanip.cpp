#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.141592653589793;

    // Example 1: setw
    std::cout << std::setw(10) << "Hello" << std::setw(10) << "World" << std::endl;

    // Example 2: setprecision
    std::cout << std::setprecision(4) << "Pi: " << pi << std::endl;

    // Example 3: setfill
    std::cout << std::setfill('*') << std::setw(10) << 123 << std::endl;

    // Example 4: fixed and scientific
    double largeNumber = 1234567890.123456789;
    std::cout << std::fixed << "Large Number (fixed): " << largeNumber << std::endl;
    std::cout << std::scientific << "Large Number (scientific): " << largeNumber << std::endl;

    // Example 5: left and right
    std::cout << std::left << std::setw(10) << "Left" << std::right << std::setw(10) << "Right" << std::endl;

    return 0;
}
