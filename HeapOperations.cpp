#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a;
    vector<pair<string, long long>> v;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (long long i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "insert")
        {
            long long x;
            cin >> x;
            pq.push(-x);
            v.push_back(make_pair("insert", x));
        }
        else if (s == "removeMin")
        {

            if (pq.size() == 0)
            {
                v.push_back(make_pair("insert", 0));
            }
            else
            {
                pq.pop();
            }
            v.push_back(make_pair(s, -1));
        }
        else
        {
            long long e;
            cin >> e;
            if (pq.size() != 0)
            {

                while (pq.size() != 0 && pq.top() < e)
                {
                    pq.pop();
                    v.push_back(make_pair("removeMin", -1));
                }
                if (pq.size() == 0 || pq.top() > e)
                {
                    pq.push(e);
                    v.push_back(make_pair("insert", e));
                }
                v.push_back(make_pair("getMin", e));
            }
            else
            {
                pq.push(e);
                v.push_back(make_pair("insert", e));
                v.push_back(make_pair("getMin", e));
            }
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].first == "removeMin")
        {
            cout << v[i].first << endl;
        }
        else
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }

    return 0;
}