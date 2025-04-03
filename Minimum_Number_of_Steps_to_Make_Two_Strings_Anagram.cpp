class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        for (char c : t) {
            freq[c]--;
        }
        int steps = 0;
        for (auto entry : freq) {
            if (entry.second > 0) {
                steps += entry.second;
            }
        }

        return steps;

    }
};