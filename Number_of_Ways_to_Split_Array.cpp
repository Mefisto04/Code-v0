class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        long totalSum = 0, leftSum = 0;
        for (int i =0;i<nums.size();i++) {
            totalSum += nums[i];
        }
        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
            long rightSum = totalSum - leftSum;

            if (leftSum >= rightSum) {
                res++;
            }
        }

        return res;
    }
};