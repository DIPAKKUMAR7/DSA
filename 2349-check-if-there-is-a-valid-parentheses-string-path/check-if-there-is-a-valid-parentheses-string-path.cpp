class Solution {
public:
    vector<vector<vector<int>>> dp;
    int m,n;
    bool solve(int i,int j,int count,vector<vector<char>> &grid){
        if(i>=m || j>=n) return 0;

        if(grid[i][j] == '(') count++;
        else count--;

        if(count<0) return 0;
        if(i==m-1 && j==n-1 && count==0) return 1;
        if (dp[i][j][count] != -1)
            return dp[i][j][count];

        return dp[i][j][count] =
            solve(i + 1, j, count, grid) ||
            solve(i, j + 1, count, grid);
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        if(grid[0][0] == ')') return false;

        dp.assign(m,vector<vector<int>>(n,vector<int>(m + n + 1, -1)));

        return solve(0,0,0,grid);  
    }
};