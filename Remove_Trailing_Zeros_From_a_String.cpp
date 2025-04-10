class Solution {
public:
    string removeTrailingZeros(string num) {
        string ans = "";
        bool foundNonZero = false;

        for (int i = num.size() - 1; i >= 0; i--) {
            if (!foundNonZero && num[i] == '0')
                continue;
            foundNonZero = true;
            ans = num[i] + ans;
        }
        return ans;
    }
};