class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return n;
        int p = 1;
        while (p <= n) {
            p = p * 2;
        }
        return p;

    }
};