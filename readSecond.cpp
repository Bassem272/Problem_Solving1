#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>


// void print(vector<int> v) {
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    using namespace std; // Import the entire std namespace

    vector<int> numbers;

    // Read input values and save them in the vector
    cout << "Enter numbers (press Enter after each number, or Ctrl+D/Ctrl+Z to finish):\n";
    istream_iterator<int> input_begin(cin);
    istream_iterator<int> input_end;

    while (input_begin != input_end)
    {
        int num = *input_begin;
        numbers.push_back(num);
        ++input_begin;

        // Process and display the result
        // cout << "Current numbers: ";
        // for (int x : numbers) {
        //     cout << x << " ";
        // }
        // cout << endl; 
        for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    }

     
    return 0;
}
