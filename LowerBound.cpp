#include <iostream> // std::cout
#include <algorithm>
using namespace std;
int main () {
int arr[] = {2,8,3,11,2,5,6};
sort(arr,arr+7); // 2 2 3 5 6 8 11
int val= *lower_bound(arr,arr+7, 11);
int index = lower_bound(arr,arr+7, 11) - arr;
cout<<val << ' '<< index<<'\n';
return 0;
}