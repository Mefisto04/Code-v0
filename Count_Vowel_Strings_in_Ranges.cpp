class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans; 
        for (auto& query : queries) {
            int li = query[0]; 
            int ri = query[1]; 
            int count = 0;    
            
            for (int i = li; i <= ri; ++i) {
                if (isVowel(words[i][0]) && isVowel(words[i].back())) {
                    count++;
                }
            }
            ans.push_back(count); 
        }
        return ans;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
