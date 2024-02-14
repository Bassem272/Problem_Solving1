#include<bits/stdc++.h>

using namespace std; 

class Solution {
public:
    string reverseWords(string s) {
        regex pattern("[A-Za-z]+");
        sregex_iterator it (s.begin(),s.end(),pattern); 
        sregex_iterator end; 
        smatch word;
        vector<string> v; 
        while(it != end){
         word = *it; 
         string str = word[0]; 
         v.push_back(str); 
         it++; 
        }
        int n = v.size(); 
        for( int i =n-1 ; i>=0; i--){
            cout<<v[i]<<" ";
        }
        // cout<<endl; 
        return 0; 
    }
};

int main() {
    Solution s; 
    string str = "Let's take LeetCode contest";
    s.reverseWords(str);
    return 0;
}