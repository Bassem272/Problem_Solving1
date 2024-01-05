#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> needed(n);
    for (auto &x : needed)
    {
        cin >> x;
    }
    vector<int> available(n);
    for (auto &x : available)
    {
        cin >> x;
    }
    int count = 0;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (needed[i] < available[i])
            {
                available[i] = available[i] - needed[i];
            }
            else
            {
                m = m - (needed[i] - available[i]);
                available[i] = 0;
            }
        }
        if (m >= 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}