#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    string input;

    getline(cin, input);

    istringstream tokenStream(input);
    int num;
    vector<int> numbers;
    while (tokenStream >> num)
    {
        numbers.push_back(num);
        char c;
        if (!(tokenStream >> c) || c != '+')
        {
            break;
        }
    };
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i];
        if (!(i == numbers.size() - 1))
        {
            cout << "+";
        }
    }
    cout << endl;
    return 0;
}