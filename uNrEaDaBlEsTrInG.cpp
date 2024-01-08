#include <iostream>

using namespace std;
bool solve ( int idx , string s) {
    if(idx == s.length()) return true; // base case
    if(idx%2 ==0) {
        if(s[idx] >= 'a' && s[idx] <= 'z') return solve(idx+1,s);
        else return false;
    }else{
        if(s[idx] >= 'A' && s[idx] <= 'Z') return solve(idx+1,s);
        else return false;
    }
}

int main(){
    string s; 
    cin>>s; 

    bool flag = solve(0,s);
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0; 
}