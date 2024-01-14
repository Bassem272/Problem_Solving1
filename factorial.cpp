#include <iostream>
using namespace std;
typedef long long ll;
ll solve(ll pro, ll i)
{
    if (i == 0)
    {
        return pro; // base case
    }

    pro *= i; // Multiply the product by i

    // Update ctn in the recursive call
    return solve(pro, i - 1);
}

int main()
{

    ll i;
    cin >> i;
    if(i ==0 ) {
        cout<<0<<endl; 
        return 0; 
    }; 
    ll pro = 1;
    ll final = solve(pro, i);
    cout << final << endl;
    return 0;
}
