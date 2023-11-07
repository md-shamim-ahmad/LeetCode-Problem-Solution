class Solution {
public:
    void dfs(int j, vector<bool> &vis, vector<int> adj[]) {
        vis[j] = true;
        for (auto x: adj[j]) {
            if (!vis[x]) {
                dfs(x, vis, adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>> &v) {
        int n = (int) v.size();
        const int N = 444;
        vector<int> adj[N];
        vector<bool> vis(N);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][j] == 1 and i != j) {
                    adj[i].push_back(j);
                }
            }
        }
        vis.assign(n + 4, false);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, vis, adj);
                cnt++;
            }
        }
        return cnt;
    }
};
