class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int maxx = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                maxx=i+1;
            }
        }
        return maxx;
    }
};