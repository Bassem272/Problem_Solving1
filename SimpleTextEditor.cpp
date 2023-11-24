#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";
    stack<string> hist;
    hist.push(s);
    for (int i = 0; i < n; i++)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            string str;
            cin >> str;

            s += str;
            hist.push(s);
        }
        else if (op == 2)
        {
            int k;
            cin >> k;
            s.erase(s.size() - k);
            hist.push(s);
        }
        else if (op == 3)
        {
            int k;
            cin >> k;
            cout << hist.top()[k - 1] << endl;
        }
        else
        {
            hist.pop();
            s = hist.top();
        }
    }

    return 0;
}
