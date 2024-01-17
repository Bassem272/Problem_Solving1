#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std; 

typedef unsigned long long ull;

int main() {

    ull n; cin>>n;
    ull zeros_count =0  ; 
    for ( ull i =1 ; i>0 && i<n; i=i<<1){
        zeros_count+= !(n&i) ;
    }
    cout<<(1LL<<zeros_count)<<endl; //number of zeros
    return 0; 
}