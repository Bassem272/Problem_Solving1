#include <iostream>

using namespace std;

int main()
{
    const int Max = 1e6;
    int n, x;

    int a[Max + 1] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }

    for (int i = 1; i <= Max; i++)
    {
        if (a[i] > 0)
        {
            cout << i << " " << a[i] << endl;
        }
    }

    return 0;
}
