#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
int idx = 70; 
// vector<int> v(101);
vector<char> v = {'T','T','T','T','T','F','F','F','F'};
// for(int i =1;i<v.size();i++){
//     v[i] = i;
// }
int low=0, h=v.size()-1;
int steps = 0;
while(low<=h){
    int mid = (low+h)/2;
    steps++;
    if(idx == 'T'){
        low = mid+1;
        // cout<<"Element found at index "<<mid<<endl;
        // break;
    }
    else {
        h = mid-1;
    }
  
}
cout<<steps;
// if(low>h){
//     cout<<"Element not found"<<endl;
// }



    return 0; 
}