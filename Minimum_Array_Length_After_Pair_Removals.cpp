class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
       int n = nums.size();
       if(n==1){
        return 1;
       }
       int mid = n/2;
       int  i = 0;
       int j = mid;
       int ct = 0;
       while(i < mid && j < n){
        if(nums[i]<nums[j]){
            ct++;
            i++;
            j++;
        }
        else{
            j++;
        }
       } 
       return n-2*ct;
    }
};