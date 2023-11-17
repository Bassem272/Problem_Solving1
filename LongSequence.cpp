#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    long long n, x, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    cin >> x;
    long long total = (x / sum) * n;
    x -= (x / sum) * sum;
    for (int i = 0; i < n and x >= 0; ++i)
    {
        x -= v[i];
        total++;
    }

    cout << total << endl;
    return 0;
}