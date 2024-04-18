class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    count=count+4;
                    if(i>0){
                        if(grid[i-1][j]==1){
                            count=count-2;
                        }
                    }
                    if(j>0){
                        if(grid[i][j-1]==1){
                            count=count-2;
                        }
                    }
                }
            }
        }
        return count;
    }
};