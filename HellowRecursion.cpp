#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
int x; 
vector<int> v; 
int fb(int n) {
    if(n == x) {
        return 0; 
    }
    
     return v[n] + fb(n+1);
}

int main() {

    int n; 
    cin>> n ; 
    for(int i =1; i<=n; i++){
        cin>> x; 
        v = vector<int>(x);
        for(int j =0; j<x; j++){
            cin>> v[j];
        }
        cout<<"Case "<<i<<": "<<fb(0)<<endl;
    }

    return 0;
}
