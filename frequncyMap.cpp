#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int main()
{
    vector<string> strings = {"apple", "banana", "apple", "orange", "banana", "apple"};

    unordered_map<string, int> frequency;

    for (const auto &str : strings)
    {
        frequency[str]++;
    }

    string maxString;
    int maxFrequency = 0;

    for (const auto &pair : frequency)
    {
        if (pair.second > maxFrequency)
        {
            maxFrequency = pair.second;
            maxString = pair.first;
        }
    }

    cout << maxString << "  " << maxFrequency << endl;

    return 0;
}
