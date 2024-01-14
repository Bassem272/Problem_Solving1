#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;
void solve(int l, int r, vector<ll> &a, vector<ll> &b)
{

if (a[l] != b[r])
{
    cout << "NO" << endl;
    return;
}
if (l >= r)
{
    cout << "YES" << endl;
    return;
}
solve(l + 1, r - 1, a, b);
//    cout<<"YES"<<endl;
// return ;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> b(a);
    int l = 0, r = n - 1;

    solve(l, r, a, b);
    return 0;
}