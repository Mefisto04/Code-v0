class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();
        int total = 0;
        for(int i = 0;i<n;i++){
            total += apple[i];
        }
        int ans = 0;
        reverse(capacity.begin(),capacity.end());
        for(int i=0;i<m;i++){
            ans += capacity[i];
            if(ans>=total){
                return i+1;
            }
        }
        return 0;
    }
};