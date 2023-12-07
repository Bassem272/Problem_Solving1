#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {1, 2, 4};

    // Compare arrays lexicographically
    bool isLexicographicallySmaller = lexicographical_compare(
        begin(array1), end(array1),
        begin(array2), end(array2)
    // array1.begin(), array1.end(),
    //     array2.begin(), array2.end(),
    
    //    array1.begin(), array1.end(),
    //     array2.begin(), array2.end()
    
    );

    if (isLexicographicallySmaller) {
        cout << "array1 is lexicographically smaller than array2" << endl;
    } else {
        cout << "array1 is lexicographically equal or larger than array2" << std::endl;
    }

    return 0;
}
