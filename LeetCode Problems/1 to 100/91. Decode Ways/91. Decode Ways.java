class Solution {
    int n;
    int[] dp;
    
    public int rec(int ind, String s) {
        if (ind == n) return 1;
        if (dp[ind] != -1) return dp[ind];
        if (s.charAt(ind) == '0') return 0;
        
        int ans = rec(ind + 1, s);
        if (ind + 1 < n && (s.charAt(ind) == '1' || (s.charAt(ind) == '2' && s.charAt(ind + 1) <= '6'))) {
            ans += rec(ind + 2, s);
        }
        
        dp[ind] = ans;
        return ans;
    }
    
    public int numDecodings(String s) {
        n = s.length();
        dp = new int[n];
        Arrays.fill(dp, -1);
        return rec(0, s);
    }
}
