#include<iostream>
#include<vector>

using namespace std ; 
typedef long long ll ;
void solve(int idx , int n , int a[] , int b[]) {
    if(idx == n){
        return ;
    }
    b[idx] = max(a[idx] , b[idx-1]);
    solve(idx+1,n,a,b);
    return ;
}
int main() {
    int n; cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++) cin>>a[i];
    int b[n];
    b[0] = a[0];
    solve(1,n, a,b);
    for( auto i : b){
        cout<<i<<" ";
    }
    return 0 ;
}