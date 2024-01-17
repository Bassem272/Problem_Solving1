#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

void solve(int idxr, int idxc, int r, int c,
           vector<vector<int>> &a, vector<vector<int>> &b,
           vector<vector<int>> &sum)
{
    if (idxr > (r - 1))
    {
        return;
    }
   if(idxc > (c-1)){
    solve(idxr+1,0,r,c,a,b,sum); 
    return; 
   }
    sum[idxr][idxc] = a[idxr][idxc] + b[idxr][idxc];
    solve(idxr, idxc + 1, r, c, a, b, sum);
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));
    vector<vector<int>> b(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    vector<vector<int>> sum(r, vector<int>(c, 0));
    solve(0, 0, r, c, a, b, sum);
    for (auto i : sum)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}