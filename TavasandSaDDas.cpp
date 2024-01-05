#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int cnt;
void solve (long long n, long long lucky){
    if( lucky >= n){
        return ;
    }
    cnt++; 
    solve(n, lucky*10 + 4);
    solve(n,lucky*10 + 7); 
}

int main(){
    long long n; cin>>n;
    solve(n,0);
    cout<<cnt<<endl; 
    return 0; 
}