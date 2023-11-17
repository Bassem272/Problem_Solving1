#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
    vector<int> v;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
    int size = 1;
        for (int j = 0; j < a; j++){


      
        {
            if (j % 2 == 0 && j != 0)
            { size *= 2;
               
            }
            else
                {
                    size += 1;
                }
        }
        }
        v.push_back(size);
    }
    for (int i : v)
    {
        cout << i << endl;
    }

    return 0;
}