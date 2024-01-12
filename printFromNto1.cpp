#include <iostream>

using namespace std;

void solve(int N)
{
    if (N == 0)
        return;
    if (N == 1)
    {
        cout << N;
    }
    else
    {
        cout << N << " ";
    }
    solve(N - 1);
}
int main()
{

    int N;
    cin >> N;
    solve(N);
    return 0; // return 0 means the program is exited successfully
}