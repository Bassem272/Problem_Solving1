#include <iostream>
#include <string>

#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, i, c, a[100005], m;
    string s, b[100005];
    multiset<int> mset;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == 'i')
        {
            cin >> c;
            a[k] = c;
            b[k++] = s;
            mset.insert(c);
            m++;
        }
        else if (s[0] == 'r')
        {

            if (m == 0)
            {
                a[k] = 1;
                b[k++] = "insert";
                mset.insert(1);
                m++;
            }
            b[k++] = s;
            m--;
            mset.erase(mset.begin());
        }
        else
        {
            cin >> c;
            while (m > 0 && *mset.begin() < c)
            {
                b[k++] = "removeMin";
                mset.erase(mset.begin());
                m--;
            }
            if (m == 0 || *mset.begin() > c)
            {
                a[k] = c;
                b[k++] = "insert";
                mset.insert(c);
                m++;
            }
            a[k] = c;
            b[k++] = s;
        }
    }
    cout << k << endl;
    for (i = 0; i < k; i++)
    {
        if (b[i][0] == 'i' || b[i][0] == 'g')
        {
            cout << b[i] << " " << a[i] << endl;
        }
        else
        {
            cout << b[i] << endl;
        }
    }

    return 0;
}
