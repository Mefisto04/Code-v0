class Solution {
public:
    int reverseInt(int num){
        int ans = 0;
        while(num > 0){
            int digit = num % 10;
            ans = ans * 10 + digit;
            num = num/10;
        }

        return ans;
    }

    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(auto it : nums){
            mp[it]++;
        }

        for(auto it : nums){
            int temp = reverseInt(it);
            mp[temp]++;
        }

        return mp.size();
    }

};