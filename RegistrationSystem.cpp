#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] == 0)
        {
            mp[v[i]] = 1;
            cout<<"OK"<<endl;
        }
        else
        {
            mp[v[i]]++;
            mp[v[i] + to_string(mp[v[i]]-1)] = 101;
            cout<<v[i] + to_string(mp[v[i]]-1)<<endl;
        }
    }

    

    return 0;
}