#include <iostream>

using namespace std;
int solve(int c, int n)
{
    if (n == 1)
    {
        return c + 1;
    }
    else if (n % 2 == 0)
    {
      return   solve(c + 1, n / 2);
        
        
    }
    else if (n % 2 == 1)
    {
       return   solve(c + 1, 3 * n + 1);
       
    }
    return c; 
}
int main()
{
    int n;
    cin >> n;

    int c = 0;
    int l = solve(c, n);
    cout << l << endl;
    return 0;
}