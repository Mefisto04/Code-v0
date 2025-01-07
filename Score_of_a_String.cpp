class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(j<n){
                ans += abs(s[i]-s[j]);
                }
            }
        }
        return ans;
    }
};