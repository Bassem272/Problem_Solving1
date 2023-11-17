#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    vector<int> v;
    cin >> x;

    for (int i = 0; i < x; i++) {
        int a;
        cin >> a;

        int height = 1; // Initial height of the tree

        for (int j = 0; j < a; j++) {
            if (j % 2 == 0) {
                height *= 2; 
                cout<<"i is evern"<<j<<"size"<<height <<endl;
                // Spring: Double the height
            } else {
                height += 1; // Summer: Increase the height by 1
                cout<<"i is odd"<<j<<"size"<<height <<endl;
            }
        }
        v.push_back(height);
    }

    for (int i : v) {
        cout << i << endl;
    }

    return 0;
}
