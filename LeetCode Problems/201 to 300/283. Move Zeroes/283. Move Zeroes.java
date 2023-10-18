class Solution {
    public void moveZeroes(int[] nums) {
        int k = 0;

        // checking for the non zero elements
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                nums[k++] = nums[i];
            }
        }

        // remaining elements will be zero
        for (int i = k; i < nums.length; i++) {
            nums[i] = 0;
        }
    }
}