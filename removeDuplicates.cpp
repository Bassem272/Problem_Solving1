#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& v) {
    int n = v.size();

    int t =0 ; 
    for( auto ele : v){

        if( t==0 || t==1 || v[t-2]!=ele){
            ele = v[t]; 
            t++;
        }
    }
    return t; //returning the size of the new array
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int s = removeDuplicates(v);

    cout << s << endl;

    return 0;
}
