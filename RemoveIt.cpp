#include <iostream>
#include <vector>
using namespace std;
int n, x;
vector<int> a;
void solve(int i)
{

    if (i == n)
    {
        return;
    }
    if (a[i] != x)
    {
        cout << a[i] << " ";
    }
    solve(i + 1);
}

int main()
{
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    solve(0);
    return 0;
}