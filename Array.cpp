#include <iostream>
#include <stack>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> pos, neg, zero;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            pos.push_back(x);
        }
        else if (x < 0)
        {
            neg.push_back(x);
        }
        else
        {
            zero.push_back(x);
        }
    }

    if (pos.empty())
    {
        int x = neg.back();
        neg.pop_back();
        int y = neg.back();
        neg.pop_back();
        pos.push_back(x);
        pos.push_back(y);
    }
    if (neg.size() % 2 == 0)
    {
        int x = neg.back();
        neg.pop_back();
        zero.push_back(x);
    }

    cout<<neg.size();
 for (const auto &x : neg)
    {
        cout << x << " ";
    }
    cout << endl;
    cout<<pos.size();
    for (const auto &x : pos)
    {
        cout << x << " ";
    }
    cout << endl;
cout<<zero.size();
    for (const auto &x : zero)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}