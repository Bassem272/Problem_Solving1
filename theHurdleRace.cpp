#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    int x,y;
    vector<int> v;
    int needed=0;
    int max=0;
    cin>>x>>y;
    for(int i =0; i<x; i++){
        int a;
        cin>>a;

        if(a>max){
        max =a;
        
        }
        // v.push_back(a);
        if (y<max){
            needed = max-y;
        }
     


    }
    cout<<needed<<endl;
    return 0;
}