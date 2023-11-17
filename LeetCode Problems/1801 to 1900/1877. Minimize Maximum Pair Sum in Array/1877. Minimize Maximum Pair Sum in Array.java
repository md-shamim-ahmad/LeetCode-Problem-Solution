class Solution {
    public int minPairSum(int[] nums) {
        Arrays.sort(nums);
        int ans = -1;
        for (int l = 0, r = nums.length - 1; l <= r; l++, r--) {
            ans = Math.max(ans, nums[l] + nums[r]);
        }
        return ans;
    }
}