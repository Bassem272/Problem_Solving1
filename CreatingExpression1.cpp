#include<iostream>
#include<string>
#include<vector>

using namespace std;
typedef long long ll; 
bool solve(int idx,int n,int x,vector<int>& a,int currentSum){
    // base case 
    if(idx == n ){
        return currentSum == x;
    }

    int current = a[idx];
    bool add = solve(idx+1,n,x,a,currentSum+current);
    bool subtract = solve ( idx+1 , n , x ,a, currentSum -current);

    return add || subtract;

}
int main() {
    int n,x; cin>>n>>x; 
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    bool dec =solve(1,n,x,a,a[0]); 
    if(dec) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}