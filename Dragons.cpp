#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
#include <utility>

using namespace std;
int main()
{
    int s, n;
    string str;
    cin >> s >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
        // if(s>x){
        //     s+=y;
        //     str = "YES";
        // }
        // else{
        //     str = "NO";
        //     break;
        // }
    }

    sort(v.begin(), v.end());
    for (const auto &i : v)
    {
        if (s > i.first)
        {
            s += i.second;
            str = "YES";
        }
        else
        {
            str = "NO";
            break;
        }
    }
    cout << str << endl;

    return 0;
}