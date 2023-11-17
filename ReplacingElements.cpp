#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        vector<int> v;
        int sum = 0;
        int c = 0;
        int x, d, counter = 0;
        int need = 0; bool flag = false;
        cin >> x >> d;
        for (int i = 0; i < x; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);

            if (a > d)
            {
                need = 1;
            }
        }
            if (need == 0)
            {
                cout << "yes" << endl;
                continue;;
            }
           
        

               for (int i = 0; i < x; i++)
            {
                for (int j = i + 1; j < x; j++)
                {
                    if (v[i] + v[j] <= d)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            } if (flag == true)
            {
                cout << "yes" << endl;
            }
            else
            {

                cout << "no" << endl;
            }
    }

    return 0;
}