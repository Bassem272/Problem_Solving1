#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxi =0;
    int counter = 0 ;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>maxi){
            maxi = x;
            counter = 1;
        }
        else if(x==maxi){
            counter++;
        }
    }
 cout<<counter<<endl;

    return 0;
}