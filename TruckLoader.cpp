#include <iostream>

using namespace std;
typedef long long ll;
int solve(int n, int x)
{
    if (n <= x)
    {
        return 1;
    }
    if (n & 1)
    {
        return solve(n / 2, x) + solve((n / 2) + 1, x);
    }
    else
    {
        return 2 * solve(n / 2, x);
    }
}
int main()
{
    int n, x;
    while (cin >> n >> x)
    {
        cout << solve(n, x) << endl;
    }

    return 0;
}