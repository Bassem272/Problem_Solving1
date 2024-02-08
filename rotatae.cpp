#include<bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main() {

    int n,k; cin>>n>>k ; 

    deque<int> a(n);
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i = 0 ; i<k ; i++){
    int temp = a.front(); 
      a.pop_front(); 
      a.push_back(temp);
    }
    cout<<endl; 
    
    

    for(auto it : a){
      cout<<it<<" ";
    }


    return 0; 
}


// class Solution {
// public:
//     void rotate(vector<int>& a, int k) {
//       int n = a.size(); 
//       long long temp;
//         k = k%n; 
//             for(int i = 0 ; i<k ; i++){
//       a.insert(a.begin(),a.back());
//       a.pop_back();  
//     }
//     }
// };