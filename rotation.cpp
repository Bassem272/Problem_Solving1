#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int x,  y;
    cin >> x >> y;
    vector<int> v;
    for(int i = 0; i < x; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < y; i++){
        vector<int>::iterator temp= v.begin();
        int element_to_push = *temp; 
        v.erase(v.begin());
        v.push_back(element_to_push);
    }
    
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;

}