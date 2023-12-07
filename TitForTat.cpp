#include <iostream>
#include <vector>
#include <string>

using namespace std;

class solution
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }

        for (int i = 0; i < n - 1 && m; i++)
        {
            int removable = min(v[i], m);
            m -= removable;
            v[i] -= removable;
            v[n - 1] += removable;
        }
        for (const auto &i : v)
        {
            cout << i << " ";
        }
        cout << endl;
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