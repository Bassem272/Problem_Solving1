#include<bits/stdc++.h>
using namespace std; 
// int solve(vector<int> &v){

// }
int main() {
    int n; cin>>n ; int mx = 1e6; 

    vector<int> a(mx+1,0);
    for(int i =0; i<n; i++){
        int x; cin>>x; 
        a[x]++;
    }

 auto ele = max_element(a.begin(),a.end());
 int index = distance(a.begin(),ele);
 cout<<index<<endl;


    return 0; 
}