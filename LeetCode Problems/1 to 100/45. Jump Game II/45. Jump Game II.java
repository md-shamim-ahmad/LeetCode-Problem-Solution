class Solution {
    public int jump(int[] nums) {
        int farthest = 0, jump = 0, lastPossiblePathIndex = 0;
        for (int index = 0; index < nums.length - 1; index++) {
            final int maxPossibleDistance = nums[index] + index;
            if (farthest < maxPossibleDistance) {
                farthest = maxPossibleDistance;
            }
            if (index == lastPossiblePathIndex) {
                lastPossiblePathIndex = farthest;
                jump++;
            }
        }
        return jump;
    }
}
