#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    swap(a[0],a[n-1]);
    for(const auto& i:a){
        cout<<i<<" ";
    }

    cout<<endl;
    return 0; 
}