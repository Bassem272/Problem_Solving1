#include <iostream>
using namespace std;

void solve(int n, int arr[])
{
    if (n == 0)
    {
        cout << arr[n] << " ";
        return;
    }
    if (n % 2 == 0)
    {
        cout << arr[n] << " ";
    }
    solve(n - 1, arr);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(n - 1, arr);
    cout << endl; // Move to the next line after printing each number
    return 0;
}
