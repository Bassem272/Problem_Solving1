#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;
int main(){
    int n;
    int count = 0;
    cin>>n;
    string text;
   cin>>text;

    if(  text.length()==0){ 

    cout<<0<<endl;
    } else{

         // cout<<text<<"ttt";
    for (int i = 0; i < n; i++){
        if (text[i] == text[i+1]){
            count++;
        }
    }
    cout<<count; 
    }
  
    return 0;
}