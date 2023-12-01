#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int idx = 1;
    vector<int> served;
    multimap<int, int, greater<int>> poly;
 unordered_map <int,int> mano; 
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int c;
            cin >> c;
           mano.insert(make_pair(idx,c));
            poly.insert(make_pair(c,idx));
            idx++;
        }
         else if (x == 2)
        {
            if( poly.size() != 0 ){
                cout<<mano.begin()->first<<"mano"<<mano.begin()->second<<endl;
                served.push_back(mano.begin()->second);
                poly.erase(poly.begin());
               mano.erase(mano.begin());
            }
            
        }
        else if(x == 3)
        {
            if( poly.size() != 0 ){
                int c = poly.begin()->second;
                served.push_back(c);
                poly.erase(poly.begin());
            mano.erase(mano.begin());
            }
        }
    }
    for(const auto& i : served){
       cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}