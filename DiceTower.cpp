#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main()
{
    int n, x;
    int flag = 0;
    int a, b;
    cin >> n;
    cin >> x;
    while (n--)
    {
        cin >> a >> b;
        if (x == a || x == b || x == 7 - a || x == 7 - b)
        {
            flag = 1;
        }
        x = 7 - x;
    }

    if (flag == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}