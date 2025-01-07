class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> result;
        int n = words.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && words[i].find(words[j])!=string::npos){
                    result.insert(words[j]);
                }
            }
        }
        vector<string> ans(result.begin(),result.end());
        return ans;
    }
};