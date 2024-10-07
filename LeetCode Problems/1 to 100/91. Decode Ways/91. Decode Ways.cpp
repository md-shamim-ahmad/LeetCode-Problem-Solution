class Solution {
public:
    int n;
    vector<int> dp;
    int rec(int ind, string s) {
        if (ind == n) return 1;
        if (dp[ind] != -1) return dp[ind];
        if (s[ind] == '0') return 0;
        int ans = rec(ind + 1, s);
        if (ind + 1 < n and (s[ind] == '1' or (s[ind] == '2' and s[ind + 1] <= '6'))) {
            ans += rec(ind + 2, s);
        }
        dp[ind] = ans;
        return ans;
    }
    int numDecodings(string s) {
        n = s.size();
        dp.resize(n, -1);
        return rec(0, s);
    }
};