class Solution{
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        pair<int, string> p[n];
        for(int i = 0; i < n; i++){
            p[i].first = heights[i];
            p[i].second = names[i];
        }
        p.sort([](const auto& a, const auto& b) { 
        return a.first 
               < b.first; 
    }); 
        vector<string> ans;
        for(int i = 0; i < n; i++)
            ans.push_back(p[i].second);
        return ans;
    }
};