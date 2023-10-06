class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int sum = 0, l = 0, length = 1000000007;
        for (int r = 0; r < nums.length; r++) {
            sum += nums[r];
            while (sum >= target) {
                length = Math.min(length, r - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        return length == 1000000007 ? 0 : length;
    }
}
