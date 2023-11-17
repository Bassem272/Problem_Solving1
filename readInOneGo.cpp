#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    using namespace std;  // Import the entire std namespace
    
    vector<int> numbers;

    // Read input values and save them in the vector
    istream_iterator<int> input_begin(cin);
    istream_iterator<int> input_end;
    copy(input_begin, input_end, back_inserter(numbers));
    
    // Print the elements in the vector
    ostream_iterator<int> output_iterator(cout, " ");
    copy(numbers.begin(), numbers.end(), output_iterator);

    cout << endl;

    return 0;
}
