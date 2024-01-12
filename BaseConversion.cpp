#include <iostream>
using namespace std;

void solve(int num)
{
    if (num == 0)
    {
        return;
    }
    int i = num % 2;
    solve(num/2);
    cout <<i;  
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
