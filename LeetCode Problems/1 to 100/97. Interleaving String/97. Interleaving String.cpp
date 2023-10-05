class Solution {
#define S1 (dp[j] && s1[i - 1] == s3[i + j - 1])
#define S2 (dp[j - 1] && s2[j - 1] == s3[i + j - 1])
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.size(), m = s2.size(), k = s3.size();
        if (n + m != k)
            return false;
        vector<bool> dp(m + 1, 0);
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                dp[j] = (i == 0 && j == 0) ? true
                        : i == 0           ? S2
                        : j == 0           ? S1
                                           : S1 || S2;
            }
        }
        return dp[m];
    }
};