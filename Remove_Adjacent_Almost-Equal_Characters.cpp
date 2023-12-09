class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int temp = 0;
        for (int i = 1; i < word.size(); ++i) {
            if (word[i] == word[i - 1]) {
                temp++;
                i++;
            }
        }
        return temp; 
    }
};