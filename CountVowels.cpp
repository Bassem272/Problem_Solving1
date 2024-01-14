#include <iostream>
using namespace std;

int solve(int idx, int ctn, int l, string s)
{
    if (idx == l)
    {
        return ctn; // base case
    }

    if (tolower(s[idx]) == 'a' || tolower(s[idx]) == 'e' || tolower(s[idx]) == 'i' || tolower(s[idx]) == 'o' || tolower(s[idx]) == 'u')
    {
        ctn++;
    }

    // Update ctn in the recursive call
    return solve(idx + 1, ctn, l, s);
}

int main()
{
    string s;
    int ctn = 0;
    int idx = 0;
    getline(cin, s);
    int l = s.length();
    int vo = solve(idx, ctn, l, s);
    cout <<vo << endl;
    return 0;
}
