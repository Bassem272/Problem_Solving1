#include<iostream>

using namespace std;
int solve (int n) {
    if(n==0) return 0; 
    if(n==1) return 0;
    if(n==2) return 1;
    return solve(n-1) + solve(n-2);
}
int main(){
int n ; cin >> n; 
int fib = solve(n);
cout<< fib <<endl; 

    return 0; //return type is integer
}