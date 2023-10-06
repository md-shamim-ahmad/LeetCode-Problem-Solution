class Solution {
public:
    int help(vector<vector<int>> &arr, int i, int j, vector<vector<int>> &dp) {
        if (i == 0 && j == 0)
            return arr[i][j];
        else if (i < 0 || j < 0)
            return 1e8;
        if (dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = arr[i][j] + min(help(arr, i, j - 1, dp), help(arr, i - 1, j, dp));
    }
    int minPathSum(vector<vector<int>> &grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        return help(grid, grid.size() - 1, grid[0].size() - 1, dp);
    }
};