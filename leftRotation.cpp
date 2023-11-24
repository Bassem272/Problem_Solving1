#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;
    queue<int> q;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    for (int i = 0; i < y; i++)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    };
    for (int i = 0; i < x; i++)
    {
        int temp = q.front();
        q.pop();
        cout << temp << " ";
    }

    cout << endl;

    return 0;
}