class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> list(n);
        for (auto& x : edges) {
            list[x[0]].push_back(x[1]);
            list[x[1]].push_back(x[0]);
        }
        return dfs(-1, 0, list, hasApple);
    }

    int dfs(int prev, int curr, vector<vector<int>>& list, vector<bool>& hasApple) {
        int ans = 0;
        for (auto x : list[curr]) {
            if (x != prev) {
                int res = dfs(curr, x, list, hasApple);
                if (res > 0 || hasApple[x]) {
                    ans += (res + 2);
                }
            }
        }
        return ans;
    }
};