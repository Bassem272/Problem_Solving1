
// problem: "https://atcoder.jp/contests/abc150/tasks/abc150_c"

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;
// 3
// 1 3 2
// 3 1 2
int numPerm(vector<int> &P, vector<int> &Q)
{
    cout << "P: ";
    for (int x : P)
    {
        cout << x << " ";
    } cout << endl;
    cout << "Q: ";
    for (int x : Q)
    {
        cout << x << " ";
    }
    cout << endl;

    int n = P.size();
    int i, j, c, m;
    c = 0;

    while (P != Q)
    {
        vector<int> temp;
        i = n - 1;
        while (P[i - 1] > P[i])
        {
            cout << "i" << i << " " << P[i - 1] << P[i] << endl;
            temp.push_back(P[i]);
            i--;
            cout << "temp: ";
            for (int x : temp)
            {
                cout << x << " " << endl;
            } cout << endl;
        }
        temp.push_back(P[i]);
        j = 0;
         cout << "P before: ";
        for (int x : P)
        {
            cout << x << " ";
        }
        cout << endl;
        while (j < temp.size() && temp[j] < P[i - 1])
            j++;
cout << "Swapped before " << temp[j] << " and " << P[i - 1] << endl;
        swap(temp[j], P[i - 1]);
        cout << "Swapped after " << temp[j] << " and " << P[i - 1] << endl;
        cout << "P2: ";
        for (int x : P)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << "temp2: ";
        for (int x : temp)
        {
            cout << x << " " ;
        }
         cout << endl;
        j = 0;
        while (i < n)
        {
            P[i] = temp[j];
            i++;
            j++;
        }

         cout << "P3: ";
        for (int x : P)
        {
            cout << x << " ";
        }
 cout << endl;
        c++;
    }

    return c;
}

int main()
{
    int n;
    cin >> n;

    int i, x;
    vector<int> P, Q;

    for (i = 0; i != n; i++)
    {
        cin >> x;
        P.push_back(x);
    }

    for (i = 0; i != n; i++)
    {
        cin >> x;
        Q.push_back(x);
    }

    for (i = 0; i != n; i++)
    {
        if (P[i] == Q[i])
            continue;

        else if (P[i] < Q[i])
            cout << numPerm(P, Q); // define

        else
            cout << numPerm(Q, P); // define

        break;
    }

    if (i == n)
        cout << 0;

    return 0;
}