#include<iostream>
#include<regex>
#include<string>
#include<iterator>

using namespace std;

int main() {
    string str;
    cin >> str;
    string text = "Lost"; 
    for( int i = 1; i < 3; i++){
        if ( str[i] != str[i-1])
        {
            cout<<"Lost";
            return 0;
        }
        
    }
    cout<<"Won";

    return 0;
}
