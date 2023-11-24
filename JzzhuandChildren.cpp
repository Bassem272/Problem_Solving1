#include <iostream>
#include <cstdlib>
#include <deque>
#include <utility>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    deque<pair<int, int>> dq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        dq.push_back(make_pair(a, i+1));
    }
int last=0;
    while (!dq.empty())
    {
        if (dq.front().first <= x)
        {
            last = dq.front().second;
            dq.pop_front();
        }
        else if (dq.front().first > x)
        {
            pair<int, int> temp = dq.front();
            temp.first-=x;
            dq.pop_front();
            dq.push_back(temp);
        }
    }
    cout<<last<<endl;
    return 0;
}