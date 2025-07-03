class Solution {
public:
    void bfs(int n, int m, vector<vector<char>>& grid, vector<vector<int>>& visited) {
        visited[n][m] = 1;
        queue<pair<int, int>> q;
        q.push({n, m}); 
        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for (auto& dir : directions) {
                int nrow = row + dir[0];
                int ncol = col + dir[1];
                
                if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() &&
                    !visited[nrow][ncol] && grid[nrow][ncol] == '1') {
                    visited[nrow][ncol] = 1; 
                    q.push({nrow, ncol});  
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();  
        
        vector<vector<int>> visited(n, vector<int>(m, 0)); 
        int count = 0;  
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    bfs(i, j, grid, visited);
                    count++; 
                }
            }
        }
        
        return count;
    }
};
