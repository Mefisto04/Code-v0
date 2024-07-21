class Solution {
public:
    int solve(int ind, vector<int>& height, vector<int>& dp){
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int jumpTwo = INT_MAX;
    int jumpOne= solve(ind-1, height,dp)+ height[ind];
    if(ind>1)
        jumpTwo = solve(ind-2, height,dp)+ height[ind];
    
    return dp[ind]=min(jumpOne, jumpTwo);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return min(solve(n - 1, cost, dp), solve(n - 2, cost, dp));

    }
};