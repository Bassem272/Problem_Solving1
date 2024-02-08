#include<bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int jump(vector<int>& nums) {
            for(int i = 1 ; i<nums.size(); i++){
                nums[i] = max(nums[i] + i , nums[i-1]); 

            }
            int idx =0; 
            int res =0; 
            while(idx < nums.size()-1){
                res++; 
                idx = nums[idx];
            }
            return res; 
    }
};