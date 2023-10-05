class Solution {
public:
    int minCostClimbingStairs(vector<int> &cost) {
        vector<int> dp(cost.size());
        for (int i = 0; i < cost.size(); i++) {
            if (i < 2) {
                dp[i] = cost[i];
            } else {
                dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
            }
        }
        return min(dp[cost.size() - 1], dp[cost.size() - 2]);
    }
};