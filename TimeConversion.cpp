#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int pos = str.find("PM");
    if (pos != string::npos)
    {
        str.replace(pos, 2, "");
        string newStr = str;
        int hrAM = stoi(str.substr(0, 2));
        if (hrAM != 12)
        {
            int hr = stoi(str.substr(0, 2)) + 12;
            newStr = str.replace(0, 2, to_string(hr));
        }
        cout << newStr << endl;
    }
    else
    {
        int pos = str.find("AM");
        str.replace(pos, 2, "");
        int hrAM = stoi(str.substr(0, 2));
        if (hrAM == 12)
        {
            str.replace(0, 2, "00");
        }
        cout << str << endl;
    }

    return 0;
}