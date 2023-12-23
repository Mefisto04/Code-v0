class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end(),greater<int>());
        vector<int> arr(nums.size());
        int i = 0;
        while (!nums.empty()) {
            int a = nums.back(); 
            nums.pop_back();
            int b = nums.back(); 
            nums.pop_back();
            arr[i++] = b;
            arr[i++] = a;
        }
        return arr;
    }
};