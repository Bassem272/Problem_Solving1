#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <unordered_set>
#include <set>
using namespace std;
int main()
{

  
    map<int, int> freq;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }

  set<int> s;
 int mx = 1; 
    for (auto& i  : freq)
    {
        if(i.second > mx) {
            mx = i.second;
        }
    }
    int ans = n-mx; 

    cout << ans;
    return 0;
}