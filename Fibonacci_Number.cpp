class Solution {
public:
    int fib(int n) {
        int dp[35];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<35;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};