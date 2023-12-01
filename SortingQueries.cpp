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
    int type, m;
    priority_queue<int, vector<int>, greater<int>> nums;
    queue<int> q;
    int n;
    cin >> n;

    while (n--)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> m;
            q.push(m);
        }
        else if (type == 2)
        {
            if (!nums.empty())
            {
                cout << nums.top() << endl;
                nums.pop();
            }
            else
            {

                cout << q.front() << endl;
                q.pop();
            }
        }
        else
        {
            while (!q.empty())
            {
                nums.push(q.front());
                q.pop();
            }
        }
    }
    return 0;
}