#include <iostream>
using namespace std;
typedef long long ll;
int solve(int idx, ll sum,int n, ll arr[])
{
    if (idx == n)
    {
        return sum; // base case
    }

    // Recursive case
        sum += arr[idx];
    

    // Update Max in the recursive call
    return solve(idx + 1, sum, n, arr);
}

int main()
{
       int n; cin>>n; 
       ll sum =0 ;
       int idx = 0; // index of the 
    ll arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    ll vo = solve(idx,sum, n,arr);
    cout <<vo << endl;
    return 0;
}
