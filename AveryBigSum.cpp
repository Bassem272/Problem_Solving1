#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    long long total =0;
    
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
    total+=a;
    }

    cout<<total<<endl;
    return 0;
}