class Solution {
public:
    const int MOD = 1e9 + 7;

    vector<vector<vector<int>>> dp;
    vector<vector<int>> grid;

    int m,n;
    // dir 0--> left , 1--> up
    int dfs(int i,int j,int dir){
        if(i<0 || j<0) return 0;

        if(i == 0 && j== 0) return 1;

        if(dp[i][j][dir] != -1) return dp[i][j][dir];
        long long ans = 0;
        if(grid[i][j] == 0){
            ans = (dfs(i,j-1,0) + dfs(i-1,j,1)) % MOD;
        }
        else{
            if(dir == 0){
                ans = dfs(i-1,j,1);
            }
            else{
                ans = dfs(i,j-1,0);
            }
        }

        return dp[i][j][dir] = ans;
    }
    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        this->grid = grid;

        dp.assign(m,vector<vector<int>> (n,vector<int>(2,-1)));

        return dfs(m-1,n-1,0);
    }
};