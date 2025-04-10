class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int count = 0 ;
        for(int i=0;i<words.size();i++){
            string word = words[i];
            if(vowels.count(word.front()) && vowels.count(word.back())){
                count++;
            }
            return count;
        }
    }
};