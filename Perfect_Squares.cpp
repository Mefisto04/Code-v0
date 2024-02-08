class Solution {
public:
    int solve(int n)
    {
        // Base Case
        if(n == 0) return 0;

        int mini = INT_MAX;
        for(int i = 1; i * i <= n; i++)
        {
            int perfectSquare = i * i;
            int ans = 1 + solve(n - perfectSquare);
            mini = min(mini,ans);
        }

        return mini;
    }
};