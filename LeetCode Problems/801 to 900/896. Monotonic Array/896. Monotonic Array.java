class Solution {
    public boolean isMonotonic(int[] nums) {
        boolean check = true;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i - 1] >= nums[i])
                check = true;
            else {
                check = false;
                break;
            }
        }
        if (check == true) return check;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i - 1] <= nums[i])
                check = true;
            else {
                check = false;
                break;
            }
        }
        return check;
    }
}
