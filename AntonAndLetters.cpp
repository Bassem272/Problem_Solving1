#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <regex>
#include <set>

using namespace std;
int main()
{

    string str;
    getline(cin, str);
    regex char_regex("[a-z]");
    vector<string> v;
    set<char> se;

    sregex_iterator iter(str.begin(), str.end(), char_regex);
    sregex_iterator end;

    while (iter != end)
    {
        smatch match = *iter;
        se.insert(match.str()[0]);
        iter++;
    }
    cout << se.size() << endl;

    return 0;
}