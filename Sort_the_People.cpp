class Solution{
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        unsorted_map<int,string> p;
        for(int i=0;i<n;i++){
            p[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        vector<string> sorted(n);
        for(int i=n-1;i>=0;i--){
            sorted[n-i-1]=p[heights[i]];
        }
        return sorted;
};