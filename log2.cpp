#include <iostream>

using namespace std;
typedef long long ll;
int solve(int c, ll n)
{
    if (n == 1)
    {
        return c;
    }

    return solve(c + 1, n / 2);
}
int main()
{
    ll n;
    cin >> n;

    int c = 0;
    int l = solve(c, n);
    cout << l << endl;
    return 0;
}