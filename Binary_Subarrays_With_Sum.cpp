#include <vector>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        int sum = 0;
        int left = 0;
        int right = 0;

        while (right < nums.size()) {
            sum += nums[right];
            while (sum > goal) {
                sum -= nums[left++];
            }
            if (sum == goal) {
                int temp = left;
                while (temp < right && nums[temp] == 0) {
                    count++;
                    temp++;
                }
                count++;
            }
            right++;
        }

        return count;
    }
};
