#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    int pos=0, neg=0, zero=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a ;
        cin>>a;
        if (a>0){
        pos++;
             }
             else if(a<0){
                neg++;
             }
             else{
                zero++;}
    }
    cout<<static_cast<float>(pos)/n<<endl;
    cout<<static_cast<float>(neg)/n<<endl;
    cout<<static_cast<float>(zero)/n<<endl;
return 0;
}



     