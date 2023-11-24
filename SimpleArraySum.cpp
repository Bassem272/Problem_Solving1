#include<iostream>
#include<string>
#include<vector>
using namespace std;



8       
1 abc   
3 3     
2 3     
1 xy
3 2
4 
4 
3 1


int main(){
    int l;
    cin>>l;
    int sum=0;
    vector<int> v(1005);
    for(int i=0;i<l;i++){
       cin>>v[i];
       sum += v[i]; 
    }
    cout<<sum<<endl;

    return 0;

}