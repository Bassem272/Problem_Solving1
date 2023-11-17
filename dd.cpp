#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;
int min(){

    int n;
    cin>>n;
    vector<vector<int>> vOut;

            for (int i=0;i<n;i++){
                    vector<int> vIn;
                for (int j=0;j<n;j++){
                int x;
                cin>>x;
                vIn.push_back(x);
                }
        
                vOut.push_back(vIn);
            }

            for ( int i = 0; i < n; i++){
                cout<<vOut[i][i]<<" ";
            }
            cout<<endl;
    return 0;

}