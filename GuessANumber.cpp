#include<iostream>

using namespace std; 
typedef long  ll;
int main() {
    int n; cin>>n;
    string op,ds; 
    ll num, lt = 1e9+1,gt = -1e9-1;
    for(int i =0; i<n; i++){
        cin>>op>>num>>ds;
        if((op == ">=" || op == ">") && (ds == "Y")){
            if(num >gt && op == ">="){
                gt = num; 
            }else if ( num >gt && op == ">"){
                gt = num+1;
            }
        }else if((op == "<=" || op == "<" ) && ( ds == "Y")) {
            
            if( num == lt && op == "<"){
                lt = num;
                cout<<"Impossible"<<endl; 
                return 0;
            }
            else if(num <lt && op == "<") {
                lt = num-1; 
            }else if ( num <lt && op == "<="){
                lt = num;
            }
        }else if((op == "<=" || op == "<" ) && ( ds == "N")) {
        if(num >gt && op == "<"){
                gt = num; 
            }else if ( num >gt && op == "<="){
                gt = num+1; 
            }
        }else if((op == ">=" || op == ">" ) && ( ds == "N")) {
            if(num <lt && op == ">") {
                lt = num; 
            }
            else if(num <lt && op == ">="){
                lt = num-1;
            }
        }
    }
    // cout<<gt<<"**"<<lt<<endl;
 if (gt > lt ) {
    cout << "Impossible" << endl;
    
}else{

    cout<<gt<<endl; 
}

    return 0; 
}