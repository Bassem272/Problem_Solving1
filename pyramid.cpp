#include <iostream>
using namespace std;

void printCharacter(char c, int times)
{
    for (int i = 0; i < times; ++i)
    {
        cout << c;
    }
}

void solve(int x, int n)
{
    if (x)
        if (x > n)
        {
            return;
        }

    solve(x + 1, n);
    for (int i = 0; i < n - x; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < x * 2 - 1; i++)
    {
        cout << "*";
    }
    cout << endl;

}

int main()
{
    int n;
    cin >> n;

    solve(1, n);

    return 0;
}
