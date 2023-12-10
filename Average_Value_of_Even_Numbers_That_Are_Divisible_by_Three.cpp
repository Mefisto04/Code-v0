class Solution {
public:
    int averageValue(vector<int>& nums) {
        int temp=0;
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                temp+=nums[i];
                s++;
            }
        }      
        if(temp==0) return 0;
        return temp/s;   
    }
};