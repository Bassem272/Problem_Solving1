#include<bits/stdc++.h>

using namespace std; 

int main(){
    int n,m; 
    cin>>n>>m; 
   vector<int> a(n);
   vector<int> b(m);
   for(int i =0 ; i<n; i++){
       cin>>a[i];
   }

     for(int i =0 ; i<m; i++){
       cin>>b[i];
   }
//    a.erase(remove(a.begin(),a.end(),0),a.end());
   //b.erase(remove(b.begin(),b.end(),0),b.end())
   a.resize(n+m); 

   for(int i =0 ; i<m; i++){
    a[n+i] = b[i];
   }
    sort(a.begin(),a.end()); 
    for(int i =0 ; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}