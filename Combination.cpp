#include <iostream>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

ll mod_pow(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

ll mod_inverse(ll x) {
    return mod_pow(x, MOD - 2);
}

ll nCr(int n, int r) {
    ll numerator = 1;
    ll denominator = 1;

    for (int i = 1; i <= r; ++i) {
        numerator = (numerator * (n - i + 1)) % MOD;
        denominator = (denominator * i) % MOD;
    }

    return (numerator * mod_inverse(denominator)) % MOD;
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << nCr(n, r) << endl;

    return 0;
}



// Certainly! Let's break down the code into simpler terms:

// 1. **Modular Arithmetic:**
//    - Imagine you have a clock, and after reaching 12, it starts again from 1. This is similar to modular arithmetic.
//    - The code uses a big prime number (1e9 + 7) as the "clock size" to keep numbers within a manageable range.

// ```cpp
// const int MOD = 1e9 + 7;  // This is our clock size (a big prime number)
// ```

// 2. **Binary Exponentiation (`mod_pow`):**
//    - This function efficiently calculates \(a^b \mod \text{MOD}\) using a clever method known as binary exponentiation.
//    - It prevents big numbers from getting too big during exponentiation.

// ```cpp
// ll mod_pow(ll base, ll exp) {
//     ll result = 1;
//     while (exp > 0) {
//         if (exp % 2 == 1) {
//             result = (result * base) % MOD;  // If the current bit of exp is 1, multiply result by base
//         }
//         base = (base * base) % MOD;  // Square the base
//         exp /= 2;  // Move to the next bit of exp
//     }
//     return result;
// }
// ```

// 3. **Modular Inverse (`mod_inverse`):**
//    - This function finds the "opposite" of a number in our clock.
//    - For example, the modular inverse of 3 is 7 because \(3 \times 7 \equiv 1 \mod 10\).

// ```cpp
// ll mod_inverse(ll x) {
//     return mod_pow(x, MOD - 2);  // Using mod_pow to find x^(-1) mod MOD
// }
// ```

// 4. **Calculating \(nCr\) with Modular Arithmetic (`nCr`):**
//    - Instead of calculating factorials directly, the code calculates the numerator and denominator modulo MOD separately.
//    - This prevents big numbers and overflows.

// ```cpp
// ll nCr(int n, int r) {
//     ll numerator = 1;
//     ll denominator = 1;

//     for (int i = 1; i <= r; ++i) {
//         // Calculate numerator and denominator separately to avoid overflow
//         numerator = (numerator * (n - i + 1)) % MOD;
//         denominator = (denominator * i) % MOD;
//     }

//     // Calculate nCr modulo MOD using modular inverse
//     return (numerator * mod_inverse(denominator)) % MOD;
// }
// ```

// 5. **Main Function (`main`):**
//    - Reads input values for \(n\) and \(r\).
//    - Calls the `nCr` function to calculate \(nCr \mod \text{MOD}\).
//    - Prints the result.

// ```cpp
// int main() {
//     int n, r;
//     cin >> n >> r;

//     cout << nCr(n, r) << endl;

//     return 0;
// }
// ```

// In summary, the code uses modular arithmetic to handle big numbers efficiently, preventing overflows during calculations involving factorials and combinations. The `mod_pow` function helps with exponentiation, and the `mod_inverse` function finds the modular inverse. The `nCr` function calculates combinations modulo MOD, ensuring correctness and efficiency.