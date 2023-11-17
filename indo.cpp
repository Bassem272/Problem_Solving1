#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void print(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int cases;
    // cout << "Enter the number of test cases: ";
    cin >> cases;

    while (cases--) {
        int n, s, r;
        vector<int> v;
        cin >> n >> s >> r;
        int max_val = s - r;
        v.push_back(max_val);
        int x = (r) / (n - 1);
        int mod=(s-max_val)%(n-1);
          for (int i = 0; i < n - 1; i++) {
             if (mod>0) {
                v.push_back(x+1);
                mod--;
               
            
                // int x = (s - max_val) / (n - 1);
                // v.push_back(x);
            
        } else {
                v.push_back(x);
         
            // v.push_back(s - max_val - ((n - 1) * floor((s - max_val) / (n - 1))));
        }
}
        print(v);
    }

    return 0;
}
// 7
// 2 2 1
// 2 4 2
// 4 9 5
// 5 17 11
// 3 15 10
// 4 4 3
// 5 20 15

// outputCopy
// 1 1
// 2 2 
// 1 2 2 4
// 6 4 2 3 2
// 5 5 5
// 1 1 1 1
// 1 4 5 5 5 some outputs like i n case of  5 20 15
//  5 3 3 3 6
