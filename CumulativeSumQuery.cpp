#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int c; cin>>c;
    vector<int> a(c);
    for(auto& i:a){
        cin>>i;
    }
    int n; cin>>n;
    
    while(n--){
    int x,y;
        int sum(0);
        cin>>x>>y;
        for(int i=x;i<=y;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}
