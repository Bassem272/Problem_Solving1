#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
typedef long long ll;
typedef long double ld;

bool check(vector<ll> v, ll x, ll k)
{
    ll coef = v[0] + x;
    for (int i = 1; i < v.size(); i++)
    {
        if (100 * v[i] > coef * k) return 0; 
        
            coef += v[i];
        
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
            
        ll l = 0, r = 1e17, ans = 1e18;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(v, mid, k)){

                r = mid - 1, ans = mid;
            }
            else{

                l = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}