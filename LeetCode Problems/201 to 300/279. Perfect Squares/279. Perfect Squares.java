class Solution {
    public int numSquares(int n) {
        ArrayList<Integer> dp = new ArrayList<>();
        dp.add(0);
        for (int i = 1; i <= n; i++) dp.add(100007);
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j * j <= i; j++) dp.set(i, Math.min(dp.get(i), 1 + dp.get(i - j * j)));
        }
        return dp.get(n);
    }
}
