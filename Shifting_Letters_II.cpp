class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> v(n + 1, 0);  
        for (auto it : shifts) {
            int l = it[0], r = it[1], d = it[2];
            v[l] += 2 * d - 1;       
            v[r + 1] -= 2 * d - 1;  
        }

        int shift = 0; 
        for (int i = 0; i < n; i++) {
            shift += v[i]; 
            int p = (s[i] - 'a' + shift % 26 + 26) % 26; 
            s[i] = 'a' + p;  
        }

        return s;
    }
};