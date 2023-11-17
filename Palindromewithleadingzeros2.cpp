#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> numbers;
    string str1 = str;
    reverse(str1.begin(), str1.end());

    if ( str == str1){
        cout<<"Yes";
        return 0;
    }


    int cnt=0;
    int n = str.size();
    for(int i=n-1; i>=0; i--){
        if(str[i] == '0'){
            cnt+=1;
        }
    }

    for( int i = 0 ; i<cnt; i++){
        str= '0'+str;
    }

    string str2 = str;
    reverse(str2.begin(), str2.end());

    if(str == str2){
        cout<<"Yes";
        return 0;
    }else{
        cout<<"No";
        return 0 ;

    }

}