class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2; 
        sort(nums.begin(),nums.end()); 
         int t =1;
         for(int i =0;i<nums.size()-1;++i){
            if(nums[i]==nums[i+1]){
                t++;
                if(t==n){
                    return nums[i];
                }
            }
            
         }
     return nums[0];
    }
};