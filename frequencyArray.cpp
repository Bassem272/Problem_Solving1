#include <iostream>

using namespace std;

int main()
{
    const int nn = 1e5;
    int loops;
    cin >> loops;

        int a[nn + 1] = {0}; // Reset the array for each loop
    while (loops--)
    {
        int n, x;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
int flag =0;
        // Check if any element in the array is greater than 0
        for (int i = 1; i <= nn; i++)
        {
            if (a[i] > 1)
            {
                cout << "ne krasivo" << endl;
                break;
            }
            else if (i == nn)
            { flag=1;
            }
               if(flag == 1) cout << "prekrasnyy" << endl;
        }
    }

    return 0;
}
