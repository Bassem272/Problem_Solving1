#include <iostream>
#include<iomanip> //for setprecision
using namespace std;
typedef long long ll;
ll sum =0; 
int solve(int c,int s, ll a[])
{
    if (c == s)
    {
        return (sum/c);
    }
   sum += a[c];
    return solve(c + 1, s, a);
  
   
}
int main()
{
    int n;
    cin >> n;
     ll a[n]; 
     for(int i =0;i<n;i++) {
        cin>>a[i];
     }
    int  idx = 0;
    int s = sizeof(a) / sizeof(a[0]);
    ll l = solve(idx,s, a);
    cout << setprecision(6) << l << endl;
    return 0;
}