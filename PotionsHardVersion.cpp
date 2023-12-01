#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a;
    vector<long long> v;
    priority_queue<long long> pq;
    for (int i = 0; i < n; i++)
    {

        cin >> a;
        v.push_back(a);
    }

    // sort(v.begin(), v.end());

    long long sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        count++;
        pq.push(-v[i]);
        if (sum < 0)
        {
            sum += pq.top();
            pq.pop();
            count--;
        }
    }

    cout << count << endl;

    return 0;
}