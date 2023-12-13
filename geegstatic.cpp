#include <iostream>
#include <functional>
#include <chrono>

using namespace std;
class MyClass {
    public: 
    explicit MyClass(std::function<void()> func) : func_(std::move(func)){}
    ~MyClass() { func_(); }
    private:
    std::function<void()> func_;
};

void runMyCode() {

    MyClass myClass([ t1 = std :: chrono ::steady_clock :: now() ](){

        std::cout<<"[Runtime = " << std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now()-t1).count()<<"nanoseconds] ";


        
        
    });
    std::cout<<"Great day! ";
    throw std::runtime_error("Exception. ");
}

int main(void) {
    try{
        runMyCode();

    }catch(std::exception const& e){
        std::cout<<e.what();
    }
}