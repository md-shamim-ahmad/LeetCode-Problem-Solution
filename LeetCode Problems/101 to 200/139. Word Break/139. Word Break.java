class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        int n = s.length();
        boolean[] dp = new boolean[n + 1];
        Arrays.fill(dp, false);
        dp[n] = true;
        for (int i = n - 1; i >= 0; i--) {
            for (String w : wordDict) {
                if (i + w.length() <= n && s.substring(i, i + w.length()).equals(w)) {
                    dp[i] = dp[i + w.length()];
                }
                if (dp[i]) {
                    break;
                }
            }
        }
        return dp[0];
    }
}
