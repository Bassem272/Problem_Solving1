#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        int count = 0;
        for (int i = 0; i < v.size()-1; i++)
        {
            
           float maxi = max(v[i], v[i + 1]);
            float mini = min(v[i], v[i + 1]);
            while ((maxi / mini) > 2)
            {
                maxi = ceil(maxi / 2);
                count++;
            }
        }
        cout << count << endl;
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    int testes;
    cin >> testes;
    for (int i = 0; i < testes; i++)
    {
        Solution sol;
        sol.solve();
    }

    return 0;
}