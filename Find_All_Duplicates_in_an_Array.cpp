class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        map<int,int>m;
        for(auto i:v)
            m[i]++;
        vector<int>ans;
        for(auto i:m) {
            if(i.second==2)
                ans.push_back(i.first);
        }
        return ans;
    }
};