#include <iostream>
using namespace std;

typedef long long ll;

ll solve( int n, int m, ll arr[])
{
    // Base case: if index is equal to the number of elements, return 0
    if (m == n)
    {
        return 0;
    }

    // Recursive case: add the current element and call the function with the next index
    return arr[m] + solve(n,m+1, arr);
}

int main()
{
    int n,m; 
    cin >> n>>m;

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll result = solve( n,m-1, arr);
    cout << result << endl;

    return 0;
}
