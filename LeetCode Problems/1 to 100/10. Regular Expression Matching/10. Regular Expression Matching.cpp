class Solution
{
public:
    bool isMatch(string s, string p)
    {
        int sizeofString1 = s.length(), sizeOfString2 = p.length();
        bool dp[sizeofString1 + 1][sizeOfString2 + 1];
        memset(dp, false, sizeof(dp));
        dp[0][0] = true;

        for (int i = 0; i <= sizeofString1; i++)
        {
            for (int j = 1; j <= sizeOfString2; j++)
            {
                if (p[j - 1] == '*')
                {
                    dp[i][j] = dp[i][j - 2] || (i > 0 && (s[i - 1] == p[j - 2] || p[j - 2] == '.') && dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = i > 0 && dp[i - 1][j - 1] && (s[i - 1] == p[j - 1] || p[j - 1] == '.');
                }
            }
        }

        return dp[n][m];
    }
};