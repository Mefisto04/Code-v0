class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i = 1;i<n;i++){
            while(nums[i]<=nums[i-1]){
                nums[i]++;
                count++;
            }
        }
        return count;
    }
};