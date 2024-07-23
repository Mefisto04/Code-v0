#include <bits/stdc++.h>
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        int temp = 0;
        int sum = 0;
        for(int i=0;i<k;i++){
            temp = nums[n-1]++;
            sum+=temp;
        }
        return sum;
    }
};