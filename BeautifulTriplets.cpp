#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int N = 1e5;
    int prefex[N], premi[N];
    vector<int> a(N);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     prefex[0] = premi[0] = a[0] ;
    for (int i = 1; i < n; i++)
    {
        prefex[i] = a[i] - a[i - 1];
        premi[i] = min(a[i], premi[i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << prefex[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << premi[i] << " ";
    }

    return 0;
}

// Inputcopy	Outputcopy
// STDIN           Function
// -----           --------
// 3
// 7
// 1 2 4 5 7 8 10