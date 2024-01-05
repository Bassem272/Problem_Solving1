#include <iostream>
#include <cmath>
using namespace std; 

int gcd_of_factorials(int A) {
    if (A == 1) {

        return 1;
    }
    return A*gcd_of_factorials(A-1);
}

int main() {
    int A, B;
    std::cin >> A >> B;
    int mn  = min(A,B); 

    int result = gcd_of_factorials(mn);
    std::cout << result << std::endl;

    return 0;
}
