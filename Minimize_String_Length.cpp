class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> ans;
        for(int i = 0; i < s.length(); ++i){
            ans.insert(s[i]);
        }
        return ans.size();

    }
};