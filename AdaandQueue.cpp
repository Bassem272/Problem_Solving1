#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <deque>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> dq;

    bool flag = false;
        string str;
    while (n--)
    {
        cin >> str;
       
            if (str == "push_back")
            {
                int x;
                cin >> x;
                if(flag == true){
                    dq.push_front(x);
                }else{

                dq.push_back(x);
                }
            }
            else if (str == "toFront")
            {
                int y;
                cin >> y;
                if(flag == true){
                dq.push_back(y);
                }else{
                    dq.push_front(y);
                }
            }
            else if (str == "back")
            {
                if (dq.empty())
                {
                    cout << "No job for Ada?" << endl;
                    
                }else{

                if (flag == true)
                {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
                }
            else if (str == "front")
            {
                if (dq.empty())
                {
                    cout << "No job for Ada?" << endl;
                   
                }else{

                if (flag == true)
                {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << endl;
                     dq.pop_front();
                }
                }
            }
            else if (str == "reverse")
            {
                flag = !flag;
            }
    }

    return 0;
}