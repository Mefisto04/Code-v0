const int MOD = 1e9 + 7;

class Solution {
public:
    int lengthAfterTransformations(string s, int t, vector<int>& nums) {
        vector<long long> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        for (int step = 0; step < t; ++step) {
            vector<long long> nextFreq(26, 0);
            for (int i = 0; i < 26; ++i) {
                if (freq[i] == 0) continue;
                int count = nums[i];
                for (int j = 1; j <= count; ++j) {
                    int nextIndex = (i + j) % 26;
                    nextFreq[nextIndex] = (nextFreq[nextIndex] + freq[i]) % MOD;
                }
            }
            freq = std::move(nextFreq);
        }

        long long result = 0;
        for (int i = 0; i < 26; ++i) {
            result = (result + freq[i]) % MOD;
        }

        return result;
    }
};
