class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> arr(2, -1); 
        int start = -1, end = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                if (start == -1) {
                    start = i;
                }
                end = i;
            }
        }
        if (start != -1) {
            arr[0] = start;
            arr[1] = end;
        }
        return arr;
    }
};
