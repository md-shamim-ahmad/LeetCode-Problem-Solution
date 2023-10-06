class Solution {
public:
    int minPathCost(vector<vector<int>> &grid, vector<vector<int>> &moveCost) {
        int infinit = 1000000000;
        vector<vector<int>> dp(100, vector<int>(100));
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0)
                    dp[i][j] = grid[i][j];
                else {
                    dp[i][j] = infinit;
                    for (int k = 0; k < m; k++) {
                        dp[i][j] = min(dp[i][j], dp[i - 1][k] + grid[i][j] + moveCost[grid[i - 1][k]][j]);
                    }
                }
            }
        }
        int ans = infinit;
        for (int i = 0; i < m; i++) {
            ans = min(ans, dp[n - 1][i]);
        }
        return ans;
    }
};