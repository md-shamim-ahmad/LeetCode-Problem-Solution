class Solution {
public:
    int findPeakElement(vector<int> &nums) {
        if (nums.size() == 1 || nums[0] > nums[1])
            return 0;
        if (nums[nums.size() - 1] > nums[nums.size() - 2])
            return nums.size() - 1;
        int f = 1, l = nums.size() - 2;
        while (f <= l) {
            int m = (f + l) / 2;
            if (nums[m] > nums[m - 1] && nums[m] > nums[m + 1])
                return m;
            if (nums[m + 1] < nums[m - 1]) {
                l = m - 1;
            } else {
                f = m + 1;
            }
        }
        return -1;
    }
};