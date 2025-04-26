class Solution {    
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> freq;
        FOR(i, 0, responses.size()) {
            unordered_set<string> seen;
            FOR(j, 0, responses[i].size()) {
                seen.insert(responses[i][j]);
            }
            for (auto s : seen) {
                freq[s]++;
            }
        }
        string ans = "";
        int maxFreq = 0;
        for (auto [response, count] : freq) {
            if (count > maxFreq || (count == maxFreq && response < ans)) {
                maxFreq = count;
                ans = response;
            }
        }
        return ans;

    }
};