#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
int min(){
int n ,x; 
cin>>n;
for ( int i = 0 ; i < n ; i++){
    cin>>x;
    if(x == 1) {
        cout<< -1 << endl ;
        
    }else{
        cout<<1<<endl ; 
    }
}


return 0;
}