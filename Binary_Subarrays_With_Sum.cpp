#include <vector>
#include <unordered_map>

class Solution {
public:
    int numSubarraysWithSum(std::vector<int>& nums, int goal) {
        int count = 0;
        int sum = 0;
        std::unordered_map<int, int> prefixSumCount; 
        prefixSumCount[0] = 1;
        for (int num = 0; num< nums.size(); num++) {
            sum += num;
            count += prefixSumCount[sum - goal];
            prefixSumCount[sum]++;
        }
        return count;
    }
};
