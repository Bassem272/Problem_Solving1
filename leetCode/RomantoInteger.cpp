#include <iostream>
using namespace std;

int value(char c){
    switch (c)
    {
    case 'I':  return 1;
    case 'V':  return 5;
    case 'X':  return 10;
    case 'L':  return 50;
    case 'C':  return 100;
    case 'D':  return 500;
    case 'M':  return 1000;
    default: return 0;
    }
}



int main()
{
    string s;
    cin >> s;
    int sum = 0;
    int I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000;
    for (int i = 0; i < s.size(); i++)
    {
        if (value(s[i]) < value(s[i + 1]))
        {
            sum += value(s[i + 1]) - value(s[i]);
            i++;
        }
        else
        {
            sum += value(s[i]);
        }
    }
    cout << sum;
    return 0;
}
