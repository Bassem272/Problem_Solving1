#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
typedef long long ll;
typedef long double ld;

vector<ll> vec;
ll n, k;
bool ok(ll x)
{
    ll answer = 0;
    for (int i = (n / 2); i < n; ++i)
    {
        answer += max(0ll, x - vec[i]);
    }
    return answer <= k;
}

ll BS()
{
    ll hi = 1e13, lo = vec[n / 2], med, answer;
    while (lo <= hi)
    {
        med = (hi + lo) / 2;
        if (ok(med))
            lo = med + 1, answer = med;
        else
            hi = med - 1;
    }
    return answer;
}
int main()
{
    ll x;
    cin >> n >> k;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    cout << BS() << endl;

    return 0;
}