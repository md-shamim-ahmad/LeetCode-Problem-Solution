class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        n = len(s)
        dp = [False] * (n + 1)
        dp[n] = True
        for i in range(n, -1, -1):
            for w in wordDict:
                if (i + len(w)) <= n and s[i:i+len(w)] == w:
                    dp[i] = dp[i + len(w)]
                if(dp[i]):
                    break
        return dp[0]
