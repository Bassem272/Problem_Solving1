#include <iostream>

using namespace std;
class Test
{
public:
    Test() {}
    Test(const Test &)
    {
        cout << "Copy ";
    }

    Test &operator=(const Test &)
    {
        cout << "Equal ";
        return *this;
    }
    void func1(const Test) {}
    const Test func2() { return *this; }
};

int main()
{
    Test t1;
    Test t2(t1);
    Test t3 = t2;
    t1.func1(t2);
    t2 = t3;
    t2.func2();
    return 0;
}

// Let's break down the provided C++ code to understand the class `Test`, its constructors, methods, and how objects are declared and used:

// ```cpp
// #include<iostream>

// using namespace std;

// class Test {
// public:
//     // Default constructor
//     Test() {}

//     // Copy constructor
//     Test(const Test&) {
//         cout << "Copy ";
//     }

//     // Copy assignment operator
//     Test& operator=(const Test&) {
//         cout << "Equal ";
//         return *this;
//     }

//     // Member function func1 taking a const Test parameter by value
//     void func1(const Test) {}

//     // Member function func2 returning a const Test object
//     const Test func2() {
//         return *this;
//     }
// };

// int main() {
//     // Declare and default construct an object t1 of type Test
//     Test t1;

//     // Copy construct an object t2 from t1
//     Test t2(t1);

//     // Copy construct an object t3 from t2 using copy initialization
//     Test t3 = t2;

//     // Call func1 on t1, passing t2 by value
//     t1.func1(t2);

//     // Copy assign t3 to t2
//     t2 = t3;

//     // Call func2 on t2, returning a const Test object
//     t2.func2();

//     return 0;
// }
// ```

// Here's the breakdown:

// 1. **Class `Test`:**
//    - The class `Test` has a default constructor, a copy constructor, and a copy assignment operator.
//    - It has two member functions: `func1` and `func2`.

// 2. **Object Declarations:**
//    - `Test t1;`: Declares and default constructs an object `t1`.
//    - `Test t2(t1);`: Copy constructs an object `t2` from `t1`.
//    - `Test t3 = t2;`: Copy constructs an object `t3` from `t2` using copy initialization.

// 3. **Object Usage:**
//    - `t1.func1(t2);`: Calls `func1` on `t1`, passing `t2` by value.
//    - `t2 = t3;`: Calls the copy assignment operator, copying the contents of `t3` to `t2`.
//    - `t2.func2();`: Calls `func2` on `t2`, returning a const Test object.

// 4. **Output:**
//    - The output of the program will include messages like "Copy" and "Equal" 
// based on the use of copy constructor and copy assignment operator.

// In summary, the `Test` class demonstrates the use of 
// default constructor, copy constructor, copy assignment operator, and member functions.
//  Objects are declared and manipulated to showcase these features.