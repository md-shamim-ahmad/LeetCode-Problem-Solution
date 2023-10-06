class Solution {
    public int minimumAverageDifference(int[] nums) {
        int n = nums.length;
        long[] num = new long[n];
        num[0] = nums[0];
        for (int i = 1; i < n; i++) {
            num[i] = nums[i];
            num[i] += num[i - 1];
        }
        int mn = Integer.MAX_VALUE, pos = 0;
        for (int i = 0; i < n; i++) {
            int diff;
            if (i + 1 == n)
                diff = (int) Math.abs((num[i] / (i + 1)));
            else
                diff = (int) Math.abs(num[i] / (i + 1) - ((num[n - 1] - num[i]) / (n - (i + 1))));
            if (diff < mn) {
                mn = diff;
                pos = i;
            }
        }
        return pos;
    }
}
