#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    vector<int> v(y);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int least = v[x - 1] - v[0];
    for (int i = 1; i <= y-x; i++)
    {
        int temp = v[x - 1 + i] - v[i];
        if (least > temp)
        {
            least = temp;
        }
    }
    cout << least << endl;
    return 0;
}