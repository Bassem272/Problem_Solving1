#include <iostream>
#include <cmath>
using namespace std;

int fb(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    return fb(x - 1) + fb(x - 2);
}
int main()
{
    int x;
    cin >> x;

    int f = fb(x);
    cout << f << endl;

    return 0;
}