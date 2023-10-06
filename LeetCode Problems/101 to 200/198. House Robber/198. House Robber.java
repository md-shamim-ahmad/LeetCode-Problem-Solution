class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n <= 1) return nums[0];
        int prev = nums[0], curr = Math.max(nums[1], nums[0]);
        for (int i = 2; i < n; i++) {
            int temp = Math.max(prev + nums[i], curr);
            prev = curr;
            curr = temp;
        }
        return curr;
    }
}
