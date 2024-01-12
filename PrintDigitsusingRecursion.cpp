#include <iostream>
using namespace std;

void solve(int num)
{
    if (num < 10)
    {
        cout << num;
        return;
    }
    int i = num % 10;
    num = num / 10;
    solve(num);
    cout << " " << i;  // Print a space after the recursive call
}

int main()
{
    int n;
    cin >> n;
    int num;
    while (n--)
    {
        cin >> num;
        solve(num);
        cout << endl;  // Move to the next line after printing each number
    }
    return 0;
}
