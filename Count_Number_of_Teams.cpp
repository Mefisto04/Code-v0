class Solution {
public:
    int dp[1000][1001][4];
    int solve(int ind,int pre_ind,int count,vector<int> &rating)
    {
        if(count==0)
            return 1;
        if(ind>=rating.size())
            return 0;
        if(dp[ind][pre_ind+1][count]!=-1)
            return dp[ind][pre_ind+1][count];
        int take=0;
        if(pre_ind==-1 || rating[ind]>rating[pre_ind])
            take=solve(ind+1,ind,count-1,rating);
        int notTake=solve(ind+1,pre_ind,count,rating);
        return dp[ind][pre_ind+1][count]=take+notTake;
    }
    int numTeams(vector<int>& rating) {
        memset(dp,-1,sizeof(dp));
        int incre=solve(0,-1,3,rating);
        reverse(rating.begin(),rating.end());
        memset(dp,-1,sizeof(dp));
        int decre=solve(0,-1,3,rating);
        return (incre+decre);
    }
};