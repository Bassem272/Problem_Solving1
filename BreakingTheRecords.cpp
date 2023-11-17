#include<iostream>
#include<vector>
using namespace std;
int main(){
    int minr= 100000001, maxr=-1;
    int maxL=-1, minL=-1;
    int l;
    cin>>l;
    vector<int> v(1005);


    for(int i=0; i<l; i++){
        cin>>v[i];

        

        if (v[i]>maxr){
            maxr=v[i];
            maxL+=1;

        }
        if (v[i]<minr){
            minr=v[i];
            minL+=1;
        }


    }
 vector<int> y = { maxL-1, minL-1};
    cout<< y[0]<<" "<<y[1]<<endl;
    return 0;

}
