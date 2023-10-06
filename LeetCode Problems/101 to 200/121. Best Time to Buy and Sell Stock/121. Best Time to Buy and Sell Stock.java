class Solution {
    public int maxProfit(int[] prices) {
        int mx = 0, l = 0, r = 1;
        while (r < prices.length) {
            if (prices[r] <= prices[l])
                l = r;
            else
                mx = Math.max(mx, prices[r] - prices[l]);
            r++;
        }
        return mx;
    }
}
