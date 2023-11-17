#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main()
{
    int b, k,m;
    cin >> b >> k >> m ;
    vector<int> kPr(k),mPr(m);
    int sum=0; int maxSum=-1;
    int allowSum=0;
    for (int i =0; i<k; i++){
        cin>>kPr[i];
    }
    for (int p =0; p<m; p++){
        cin>>mPr[p];
    }
     for (int i =0; i<k; i++){
        for ( int j=0; j<m;j++){
            sum = kPr[i]+mPr[j];
            if (sum<=b && sum>maxSum)
            {
            
                    maxSum=sum;
            }
                

            }
            
        }
        cout<<maxSum<<endl;





    return 0;
}