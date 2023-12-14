
#include<iostream>

using namespace std; 


class NumberOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
};


class Wrapper{
    private:
    public:
    NumberOperations obj1;

    int addMultiply(int a,int b) {
        return obj1.add(a,b)*2;
    }
    int subtractAdd(int a, int b){
        return obj1.subtract(a,b) + 10;
    }
    int square(int a) {
        return a*a;
    }


};

int main(){
   Wrapper wrapperObj;

    // Example 1
    int result1 = wrapperObj.addMultiply(5, 3);
    std::cout << "Modified Addition Result: " << result1 << std::endl;

    // Example 2
    int result2 = wrapperObj.subtractAdd(10, 5);
    std::cout << "Modified Subtraction Result: " << result2 << std::endl;

    // Example 3
    int result3 = wrapperObj.square(7);
    std::cout << "Square Result: " << result3 << std::endl;

     // Accessing NumberOperations object directly
    int resultDirect = wrapperObj.obj1.add(3, 4);
    std::cout << "Direct Addition Result: " << resultDirect << std::endl;
 return 0; 
}