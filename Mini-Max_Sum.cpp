#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
using namespace std;

int main()
{
    int n = 5;
    vector<int> v;
    long long sum=0;
    long long mx = 0;
    long long mi = LLONG_MAX;
    long long maximum = 0;
    long long minimum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        sum += x;
        if (x > mx)
            mx = x;
        if (x < mi)
            mi = x;
    }

    maximum = sum - mi;
    minimum = sum - mx;

    cout << minimum << " " << maximum << endl;

    return 0;
}
