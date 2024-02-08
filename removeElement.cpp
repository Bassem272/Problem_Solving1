#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n,e ; cin >>n>>e; 
    vector<int> a(n); 
    for(int i=0;i<n;i++) cin >>a[i];
    // a.erase(remove(a.begin(),a.end(),0),a.end()); 
   for (int i = 0; i < a.size(); i++) {
        if (a[i] == e) {
            a[i] = INT16_MIN;
        }
    }
    sort(a.begin(),a.end());
    for(int i =0 ; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;

}