#include<iostream>
#include<stack>
#include<queue>
#include<string>

using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char> s;
    for (int  i =0 ; i<str.length();i++){
        if( s.empty()){
            s.push(str[i]);
        }else if(str[i]== s.top()){
            s.pop();

        }else{
            s.push(str[i]);
        }
    }

if (s.empty()){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

    return 0;
}