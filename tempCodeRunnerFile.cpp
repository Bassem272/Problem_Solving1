#include <iostream>

using namespace std;
typedef long long ll;

ll factorial(int n)
{
    if (n == 0 || n == 1 )
    {
        return 1;
    }
    return n * factorial(n - 1); // recursive call
}
ll combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << combination(n, r)<<endl;
    return 0;
}