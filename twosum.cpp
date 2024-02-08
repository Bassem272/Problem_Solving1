#include<iostream>
#include<algorithm> // for sort() function
using namespace std;

int main() {

    int target; cin>>target;
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    // sort(a, a + n); 
    int l = 0; 
    int r = n - 1; // Use the actual size of the array
    while (l <= r){
        int temp = a[l] + a[r];
        if (temp == target){
            cout << l << " " << r << endl;
            break;
        }
        else if (temp < target){
            l++;
        }
        else {
            r--;
        }
    }
    return 0; 
}
