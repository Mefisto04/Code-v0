class Solution {
public:
    string removeStars(string s) {
        vector<char> res;
        for (char c : s) {
            if (c != '*') {
                res.push_back(c);
            } else if (!res.empty()) {
                res.pop_back();
            }
        }
        string result(res.begin(), res.end());
        return result;
    }
};