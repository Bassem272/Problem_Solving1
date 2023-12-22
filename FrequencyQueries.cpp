#include <iostream>

#include <map>
#include <vector>

using namespace std;
int main()
{
    int n;cin>>n;
    map<int, int> fr1, fr2;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            if (fr1[y])
            {
                fr2[fr1[y]]--;
            }
            fr1[y]++;
            fr2[fr1[y]]++;
        }
        else if (x == 2)
        {
            if (fr1[y])
            {
                fr2[fr1[y]]--;
                fr1[y]--;
                fr2[fr1[y]]++;
            }
        }
        else
        {
            if (fr2[y])
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
return 0;
}

