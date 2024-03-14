class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];
                if(sum==goal){
                    count++;
                }
            }
        }
        return count;
    }
};