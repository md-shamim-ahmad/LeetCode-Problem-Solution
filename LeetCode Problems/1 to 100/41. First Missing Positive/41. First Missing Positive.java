class Solution {
    public int firstMissingPositive(int[] nums) {
        int index = 0;
        while (index < nums.length) {
            int correctIndex = nums[index] - 1;

            if (nums[index] > 0 && nums[index] < nums.length && nums[index] != nums[correctIndex]) {
                Swap(index, correctIndex, nums);
            } else {
                index++;
            }
        }
        int ans = 1;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != i + 1) {

                return i + 1;
            }
        }
        return nums.length + 1;
    }

    void Swap(int First, int Second, int[] arr) {

        int temp = arr[First];
        arr[First] = arr[Second];
        arr[Second] = temp;
    }
}
