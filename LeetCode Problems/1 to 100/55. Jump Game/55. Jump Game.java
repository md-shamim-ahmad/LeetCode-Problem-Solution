class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length;
        int indx = n - 1;
        for (int i = n - 2; i >= 0; i--) {
            if (i + nums[i] >= indx) indx = i;
        }
        return indx == 0;
    }
}
