#include<iostream>

using namespace std;


class Base {
public:
    virtual void foo() {
        std::cout << "a1" << std::endl;
    }

     void bar() {
        std::cout << "b1" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Override foo from the Base class
   virtual  void foo() {
        std::cout << "a2" << std::endl;
    }

    // Override bar from the Base class
    void bar()  {
        std::cout << "b2" << std::endl;
    }
};

int main () {
    Base* ass = new Derived();
    ass->foo();
    ass->bar();


    return 0;
}