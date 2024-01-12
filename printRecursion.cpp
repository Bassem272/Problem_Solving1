#include<iostream>

using namespace std; 
void solve(int N) {
    if(N ==0) return ;
    cout <<"I Love Recursion\n";
    solve(N-1);
}
int main(){
int N; cin >>N; 
 solve(N);

    return 0; //return 0 means the program is exited successfully
}