#include <iostream>
#include <vector>
#include <string>

using namespace std;

class solution
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> v1(n);
        for (auto &i : v1)
        {
            cin >> i;
        }
        vector<int> v2(n);
        for (auto &i : v2)
        {
            cin >> i;
        }
        int diff=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v1[i] != v2[j])
                {
                    diff = abs(v1[i] - v2[j]);
                }
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    int testes = 0;
    cin >> testes;
    for (int i = 0; i < testes; i++)
    {
        solution sol;
        sol.solve();
    }

    return 0;
}