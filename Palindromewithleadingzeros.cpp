#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string palindrome(vector<int> &numbers)
{

    int n = numbers.size();
    int mid = n / 2;
    string verdict ="Yes";
    vector<int> numbers2(numbers);
    reverse(numbers2.begin(),numbers2.end() );
    for (int i = 0; i < n; i++)
    {
    
        if (numbers[i] != numbers2[i])
        {
           
            verdict = "No";
            break;}
    }
    return verdict;
};

int main()
{
    int num;
    cin >> num;
    vector<int> numbers;

    string verdict = "No";

    while (num > 0)
    {
        numbers.insert(numbers.begin(), num % 10);
        num /= 10;
    };

    int cnt=0;
    int n = numbers.size();
    int mid = n / 2;

    for(int i = n-1; i>=0; i--){
        if(numbers[i] == 0){
            cnt++;
        }
    }
//     for(auto i : numbers){
//     cout << i << "";
// }
//     cout << endl;

    if(cnt!=0){
        // reverse(numbers.begin(),numbers.end());
        for(int i = 0; i<cnt; i++){
            numbers.insert(numbers.begin(), 0);
        }
// for(auto i : numbers){
//     cout << i << "t ";
// }
    }

        verdict = palindrome(numbers);
    

    // if (verdict == "No")
    // {
    //     numbers.insert(numbers.begin(), 0);
    //     verdict=  palindrome(numbers);
    // }

    cout << verdict;
    return 0;
}