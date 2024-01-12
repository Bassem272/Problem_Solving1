#include <iostream>

using namespace std;

void solve(int i, int N)
{
    cout << i << endl;
    if (i == N)
        return;
    solve(i + 1, N);
}
int main()
{
    int i = 1;
    int N;
    cin >> N;
    solve(i, N);
    return 0; // return 0 means the program is exited successfully
}