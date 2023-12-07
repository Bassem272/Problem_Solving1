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
        int diff1 = 0, count = 0;
        int diff2 = 0;
        int diff3 = 0;
        int m;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (v1[i] != v2[i])
            {
                if (v1[i] > v2[i])
                {
                    break;
                }
                diff1 = v2[i] - v1[i];
                m = i;
                break;
            }
        }
        for (int i = m; i < n; i++)
        {
            if (v1[i] == v2[i])
            {
                break;
            };
            v1[i] += diff1;
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != v2[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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