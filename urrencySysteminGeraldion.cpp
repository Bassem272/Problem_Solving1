#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 0;
    int a[n];
    for (auto &i : a)
    {
        cin >> i;
        if (i == 1)
        {
            flag = 1;
        }
      
    }
    if (flag == 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
    return 0;
}