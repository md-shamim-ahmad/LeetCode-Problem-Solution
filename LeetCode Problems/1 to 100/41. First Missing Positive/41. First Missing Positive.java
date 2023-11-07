class Solution {
    public int firstMissingPositive(int[] nums) {
        int i = 0;
        while (i < nums.length) {
            if (isSwapElement(nums, i)) {
                // Swap the nums[i] value to its position in the array
                // e.g., nums[i] = 3, Move 3 to nums[3-1]=nums[2]
                int tgtIdx = nums[i] - 1;
                int temp = nums[i];
                nums[i] = nums[tgtIdx];
                nums[tgtIdx] = temp;
            } else {
                // Process next index
                i++;
            }
        }
        // Find solution by finding the first element
        // do not have the correct value in the array
        for (i = 0; i < nums.length; i++) {
            final int correctVal = i + 1;
            if (nums[i] != correctVal) {
                break;
            }
        }
        // The first missing positive is current index + 1
        return i + 1;
    }

    private boolean isSwapElement(int[] nums, int i) {
        // Current element value:
        // 1. > 0
        // 2. Valid index value of input array
        // 3. Source element and Target element values are not the same
        return (nums[i] > 0 && nums[i] - 1 < nums.length && nums[i] != nums[nums[i] - 1]);
    }
}
