class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> mp;
        for (char c : word) mp[c]++;
        vector<int> c;
        for (auto& pair : mp) c.push_back(pair.second);
        sort(c.begin(), c.end());
        int temp = 0;
        for (int i = 0; i < c.size() - 1; i++) {
            if (c[i] + k >= c.back()) {
                temp += c[i];
                c[i] = 0;
            }
        }
        return temp;

    }
};