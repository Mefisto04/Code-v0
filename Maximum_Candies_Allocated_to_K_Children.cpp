#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumCandies(vector<int>& candies, int k) {
        int left = 1, right = *max_element(candies.begin(), candies.end());
        long long total = 0;
        for (int c : candies) total += c;
        if (total < k) return 0; // Not enough candies

        int result = 0;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canDistribute(candies, k, mid)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }

private:
    bool canDistribute(vector<int>& candies, int k, int val) {
        int count = 0;
        for (int c : candies) count += c / val;
        return count >= k;
    }
};