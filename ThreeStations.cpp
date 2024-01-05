#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
int n;
vector<int> v;
vector<double> ans(3);
bool solve(double d)
{
    int idx = 0;
    for (int i = 0; i < 3; i++)
    {
        if (idx < n)
        {
            ans[i] = v[idx] + d;
            while (idx < n && v[idx] < ans[i] + d)
            {
                idx++;
            }
        }
    }
        return idx == n;
}

int main()
{
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    double lo = 0, hi = 2e9, md,d=0;
    for (int i = 0; i < 64; i++)
    {
         md = (lo+hi) / 2.0;
        if (solve(md))
        {
            d = md;
            hi= md;
        }
        else
        {
            lo = md;
        }
    }
    solve(d);

    cout << fixed << setprecision(6) << d << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << fixed << setprecision(6) << ans[i] << " ";
    }

    return 0;
}