#include <iostream>
using namespace std;

int solve(int idx, int Max,int n, int arr[])
{
    if (idx == n)
    {
        return Max; // base case
    }

    if (arr[idx] > Max)
    {
        Max= arr[idx];
    }

    // Update Max in the recursive call
    return solve(idx + 1, Max, n, arr);
}

int main()
{
       int n; cin>>n; 
       int Max = INT_MIN;
       int idx = 0; // index of the 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
    
    int vo = solve(idx,Max, n,arr);
    cout <<vo << endl;
    return 0;
}
