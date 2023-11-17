#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n1, n2, d;
    cin >> n1 >> n2 >> d;
    int beautiful = 0;
    for (int i = n1; i <= n2; i++)
    {
        string rev = to_string(i);
        reverse(rev.begin(), rev.end());
        int rev2 = stoi(rev);
        double ans = abs(static_cast<double>(i) - static_cast<double>(rev2)) / d;
        if (ans == static_cast<int>(ans))
        {
            beautiful++;
        }
    }
    cout << beautiful;

    return 0;
}