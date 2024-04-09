class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int i=0,j=0;
        string ans;
        while(i<n||j<m){
            if(i<n) ans.push_back(word1[i]); i++;
            if(j<m) ans.push_back(word2[j]); j++;
        }
        return ans;
    }
};