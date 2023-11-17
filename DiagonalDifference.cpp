#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

    int n;
    cin >> n;
    int right = 0;
    int left =0;
    int absolute=0;
    vector<vector<int>> vOut;

    for (int i = 0; i < n; i++)
    {
        vector<int> vIn;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            vIn.push_back(x);
        }

        vOut.push_back(vIn);
    }

    for (int i = 0; i < n; i++)
    {
        right+=vOut[i][i];
        left+=vOut[i][n-1-i];
        
    }
        absolute=abs(right-left);
        cout << absolute<< endl;

    return 0;
}