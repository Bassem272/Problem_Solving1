#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
   cout<<"enter input value as integer:"<<endl;
   int n;
   cin>>n;
    int* p = &n;
   
   cout<<"address of n is "<<*p<<endl;

    return 0; 
}