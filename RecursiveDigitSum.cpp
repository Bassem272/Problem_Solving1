#include <iostream>

using namespace std;
long long solve(long long n){
    if(n<10){
        return n; 
    }
    return (n%10)+ solve(n/10);
}

int main() {
   string s; 
   long long n;
   long long sum = 0; 
   cin>>s>>n;

   for (int i =0; i<s.size(); i++) {
    sum+=(s[i]-'0');
   }
   sum *=n; 
 while ( sum> 9) {

    sum = solve(sum); 
 }
 cout<<sum<<endl;

    return 0; 
}