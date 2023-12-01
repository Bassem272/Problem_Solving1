#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;
int main(){
int n ; cin>>n; 
    cin.ignore();  

while(n--) {
    string str1; 
getline(cin, str1);
string str2; 
getline(cin, str2);
set<char> s1(str1.begin(), str1.end());
set<char> s2(str2.begin(), str2.end());
set<char> s3;
for( const auto &i : s1){
    if( s2.find(i) != s2.end()){
        s3.insert(i);
    }
}
if( ! s3.empty()){
    cout<<"YES"<<endl;
 
}else{
    cout<<"NO"<<endl;
}
}
    return 0;
}