#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int l;
        cin >> l;
        vector<int> v;
        for(int i = 0; i < l; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        int ans = INT_MAX;
        for(int j =1; j < v.size(); j++){
            int x = v[j] - v[j-1];
         
            if(x <ans){
                ans = x;
            }
        }
        cout << ans << endl;

    }
    return 0;
}