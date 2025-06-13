class Solution {
   public:
    int fun(vector<int>& nums, vector<int>& dp,int ind) {
        if(dp[ind]!=-1) return dp[ind];
        if(ind<0) return 0;
        if(ind==0) return a[ind];
        int pick = fun(nums,dp,ind-2)+nums[ind];
        int nonPick = fun(nums,dp,ind-1);
        return dp[ind] = max(pick,nonPick);
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return fun(nums, dp, n-1);
    
    }
};