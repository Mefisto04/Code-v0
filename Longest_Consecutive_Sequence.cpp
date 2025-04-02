class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if (arr.empty()) return 0;
        sort(arr.begin(), arr.end());
        int maxLength = 1, currentLength = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) continue; 
            if (arr[i] == arr[i - 1] + 1) {
                currentLength++; 
            } else {
                maxLength = max(maxLength, currentLength);
                currentLength = 1; 
            }
        }
        return max(maxLength, currentLength); 
    }
};