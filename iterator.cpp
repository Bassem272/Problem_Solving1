#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){

set<int> st={5,1,2};
set<int>::iterator itr=st.begin();
// it++;
cout<<*itr<<'\n'; 
vector<int> vec{ 2,8,6,3,4 };
vector<int>::iterator it;
it=vec.end();
it-=2;
cout<<*it<<'\n';
    return 0;
}