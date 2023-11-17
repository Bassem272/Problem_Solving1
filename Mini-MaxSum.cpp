#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n=5;
   vector<int> v;
   long long sum;
   long long mx=0;
   long long mi=0;
      long long maximum=0;
   long long minimum=0;

   for (int i=0; i<n; i++){
       int x;
       cin>>x;
    //    v.push_back(x);
       sum += x;
       if (x > mx) mx = x;
       if (x < mi) mi = x;
   }

maximum = sum - v[mi];
minimum = sum - v[mx];

cout<<minimum<<" "<<maximum<<endl;

//    sort(v.begin(), v.end());

//    vector<int> vmax(v.begin()+1, v.end());
//    vector <int> vmin(v.begin(), v.end()-1);
//    for (int i=0; i<vmax.size(); i++){
//        maximum += vmax[i];
//        minimum += vmin[i];
//    }




//  cout<<minimum<<" "<<maximum<<endl;
 return 0;

}