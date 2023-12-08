#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string str;
    cin >> str;

    regex char_regex("0");

    smatch match;
    if (regex_search(str, match, char_regex))
    {
        string replace = regex_replace(str, char_regex, "", regex_constants::format_first_only);
        cout << replace << endl;
    }
    else
    {
        cout << str.substr(1) << endl;
    }

    return 0;
}
