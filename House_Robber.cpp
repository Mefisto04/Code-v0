class Solution {
public:
int solve(int ind, vector<int> &a, vector<int> &dp){
    if(ind==0) return a[ind];
    if(ind < 0) return 0;
    if(dp[ind] != -1) return dp[ind];
    
    int pick = solve(ind-2, a, dp) + a[ind];
    int notPick = solve(ind-1, a, dp);

    return dp[ind] = max(pick, notPick);
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);

        return solve(n-1, nums, dp);
    }
};