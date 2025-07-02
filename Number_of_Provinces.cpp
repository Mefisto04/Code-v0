class Solution {
public:
    void dfs(int node, vector<vector<int>>adjLs, vector<int> &visited ){
        visited[node]=1;
        for(auto i : adjLs[node]){
            if(!visited[i]){
                dfs(i,adjLs,visited);
            }
        }
        
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<vector<int>>adjLs(n);
        // vector<int>visited(V,0);
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][j]==1 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i,adjLs,visited);
            }
        }
        return count;
    }
};


