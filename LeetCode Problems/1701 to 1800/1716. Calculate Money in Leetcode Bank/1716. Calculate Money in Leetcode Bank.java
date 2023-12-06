class Solution {
    private int totalSum(Integer n) {
        return (n * (n + 1)) / 2;
    }
    public int totalMoney(int n) {
        int cnt = 1, sum = 0;
        while (n > 0) {
            sum += (totalSum(cnt + Math.min(n - 1, 6)) - totalSum(cnt - 1));
            cnt++;
            n -= 7;
        }
        return sum;
    }
}