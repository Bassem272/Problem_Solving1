#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int num;
        cin >> num;

        vector<int> v1(num);

        for (int i = 0; i < num; i++) {
            cin >> v1[i];
        }

        vector<pair<int, int>> v2;
        int mx = v1[0], start = 0, end = 0;

        for (int i = 0; i < num; i++) {
            if( i==0 ){
                start = i ;

            }
            
            
            else if (v1[i] > mx) {
                end = i - 1;
                v2.push_back({start, end});
                start = i;
            }
            mx = max(mx, v1[i]);
        }

        v2.push_back({start, num - 1});
        reverse(v2.begin(), v2.end());

        for (int i = 0; i < v2.size(); i++) {
            int st = v2[i].first;
            int en = v2[i].second;

            for (int j = st; j <= en; j++) {
                cout << v1[j] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
