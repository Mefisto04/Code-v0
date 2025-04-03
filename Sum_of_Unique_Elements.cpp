class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        int sum=0;
        for(auto it:ump){
            int freq = it.second;
            int num = it.first;
            if(freq==1){
                sum+=num;
            }
        }
        return sum;
    }
};