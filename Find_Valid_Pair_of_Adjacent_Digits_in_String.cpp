class Solution {
public:
    string findValidPair(string s) {
        int count[10] = {0}; 
        for (char c : s) count[c - '0']++;
        for (int i = 0; i < s.size() - 1; i++) {
            int d1 = s[i] - '0';
            int d2 = s[i + 1] - '0';
            if (d1 != d2 && count[d1] == d1 && count[d2] == d2) {
                return string(1, s[i]) + string(1, s[i + 1]);
            }
        }
        string null = "";
        return "";
    }
};