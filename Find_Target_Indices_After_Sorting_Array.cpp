class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int small = 0,greater = 0, check = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == target){
                check++;
            }
        }
        vector<int> result(check);
        if(check == 0) {
            return result;
        }
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] > target){
                greater++;
            }
            else{
                small++;
            }
        }
        small = small-check;
        for(int i = 0 ; i < check ; i++){
            result[i] = small ;
            small++;
        }
        return result;
        
    }
};