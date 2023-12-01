#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <unordered_map>
#include <utility>
#include <queue>
using namespace std;
int main()
{
    int cus = 0, type, m;
    priority_queue<pair<int, int>> poly;
    queue<int> mono;
    int q;
    cin >> q;
    vector<bool> vis(q, 0);
    while (q--)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> m;
            cus++;
            mono.push(cus);
            poly.push(make_pair(m, -cus));
        }
        else if (type == 2)
        {
            while (vis[mono.front()])
            {
                mono.pop();
            }
            vis[mono.front()] = 1;
            cout << mono.front() << " ";
            mono.pop();
        }
        else
        {
            while (vis[-poly.top().second])
            {
                poly.pop();
            }
            vis[-poly.top().second] = 1;
            cout << -poly.top().second << " ";
            poly.pop();
        }
    }
    return 0;
}