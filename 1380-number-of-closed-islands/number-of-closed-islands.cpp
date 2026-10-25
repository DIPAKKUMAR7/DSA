class Solution {
public:
    int m,n;
    bool dfs(vector<vector<int>> &grid,int r,int c){
        if( r < 0 || r >= m || c >= n || c < 0) return 0;

        if(grid[r][c] == 1) return 1;

        grid[r][c] = 1;

        bool left = dfs(grid,r,c-1);
        bool right = dfs(grid,r,c+1);
        bool up = dfs(grid,r-1,c);
        bool down = dfs(grid,r+1,c);

        return right&&left&&up&&down;
    }
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        int count = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 0){
                    count+=dfs(grid,i,j);
                }
            }
        }

        return count;
    }
};