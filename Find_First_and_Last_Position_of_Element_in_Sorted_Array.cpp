class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>arr(2,-1);
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                arr[count]=i;
                count++;
            }
        }
        return arr;
    }
};