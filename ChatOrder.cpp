#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> m;
    unordered_map<string, int> mp;
    unordered_set<string> s;
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
      
    }
    for(auto it  = v.rbegin(); it != v.rend(); it++){
        if(mp[*it] == 0){
            mp[*it] =1;
            cout<<*it<<endl;
        }

    }
    
    return 0;
}