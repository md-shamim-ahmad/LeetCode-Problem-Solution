class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size(), mxLen = 1;
        bool dp[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                dp[i][j] = false;
        for (int i = 0; i < n; i++)
            dp[i][i] = true;
        int start = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                start = i;
                mxLen = 2;
            }
        }
        for (int k = 3; k <= n; k++) {
            for (int i = 0; i < n - k + 1; i++) {
                int j = k + i - 1;
                if (dp[i + 1][j - 1] && s[i] == s[j]) {
                    dp[i][j] = true;
                    if (k > mxLen) {
                        start = i;
                        mxLen = k;
                    }
                }
            }
        }
        string ans = "";
        for (int i = start; i <= (start + mxLen - 1); i++)
            ans += s[i];
        return ans;
    }
};
