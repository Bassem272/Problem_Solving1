#include <iostream>

using namespace std;

int solve(int x, int y, int count)
{
    if (x == y)
    {
        count++;
        return count;
    }
    if (x > y)
    {
        return 0;
    }
    int result1 = solve(x + 1, y, count);
    int result2 = solve(x + 2, y, count);
    int result3 = solve(x + 3, y, count);

    return result1 + result2 + result3;
}
int main()
{
    int x, y;
    cin >> x >> y;
    int ways = solve(x, y, 0);
    cout << ways << endl;
    return 0;
}