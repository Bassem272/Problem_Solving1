#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int dd[100005];
    int n;
    cin >> n;

    int cint = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cint++;
        }
        dd[i] = cint;
    }

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        int sum = dd[b - 1] - dd[a - 1];
        cout << sum << endl;
    }

    return 0;
}