#include <iostream>
#include <cstdlib>
#include <queue>
#include<deque>
#include<stack>

using namespace std;

int main()
{

    int n, y;
    cin >> n ;
    deque<string> dq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if( a == 1){
        string str ;
        cin>> str; 
        dq.push_back(str);
        }else if( a == 2){
            dq.pop_front();
        }else if( a == 3) {
            cout<<dq.front()<<endl;
        }
        
    }


    return 0;
}