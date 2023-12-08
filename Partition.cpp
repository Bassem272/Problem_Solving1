#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> v1;
    vector<int> v2;
    for (auto &i : arr)
    {
        cin >> i;
        if (i < 0)
        {
            v1.push_back(i);
        }
        else
        {
            v2.push_back(i);
        }
    }
    int sum1 = 0, sum2 = 0;
    for (auto &i : v1)
    {
        sum1 += i;
    }
    for (auto &i : v2)
    {
        sum2 += i;
    }
    cout << sum2 - sum1 << endl;

    return 0;
}