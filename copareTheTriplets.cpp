#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include <sstream>
using namespace std;
int main(){




int a[3],b[3];
int alice=0,bob=0;

for ( int i =0; i<(sizeof(a)/sizeof(a[0])); i++){
    scanf("%d",&a[i]);
}
for(int i =0; i<(sizeof(b)/sizeof(b[0])); i++){
    scanf("%d",&b[i]);
    if(a[i]>b[i]){
        alice++;
    }else if (a[i]<b[i]){
        bob++;
    }
    
}

printf("%d %d",alice,bob);
return 0; 



}
