#include<iostream>
#include<string>
#include<vector>

using namespace std;
typedef long long ll; 
bool solve( ll target, ll currentValue){
    
    if(target == 1) return true; 
    if(  currentValue == target) {return true;}
    if(currentValue > target){
        return false; 
    }
    bool by10 = solve(target,currentValue*10);
    bool by20 = solve(target,currentValue*20);
    return by10 || by20;
}
int main() {

    int n; cin>>n; 
    ll target ; 
    while(n--) {
        cin>>target;
        if(solve(target,1)){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        //cout<<solve(3,target,0)<<endl;
    }
    return 0; 
}