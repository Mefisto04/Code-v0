class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<double>ans;
        int left = 0;
        int right = n-1;
        while(left<right){
            double avg = (nums[right]+nums[left])/(2*1.0);
            ans.push_back(avg);
            left++;
            right--;
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};