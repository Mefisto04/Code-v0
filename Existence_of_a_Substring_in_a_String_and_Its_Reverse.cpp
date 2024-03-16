class Solution {
public:
    bool isSubstringPresent(string s) {
        for (int i = 0; i < s.length()-1;i++) {
            string sub = s.substr(i, 2);
            reverse(sub.begin(), sub.end());
            if (s.find(sub) != string::npos) {
                return true;
            }
        }
        return false;

    }
};