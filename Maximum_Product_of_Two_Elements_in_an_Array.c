int maxProduct(vector<int>& nums) {
        int s= nums.size();
        sort(nums.begin(),nums.end());
         int i = s;
         int j = s-1;
    return (nums[i]-1)*(nums[j]-1);
    }
