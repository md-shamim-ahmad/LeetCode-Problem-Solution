class Solution {
public:
    int rob(vector<int> &nums) {
        int n = nums.size();
        if (n <= 1)
            return nums[0];
        int prev = nums[0], curr = max(nums[1], nums[0]);
        for (int i = 2; i < n; i++) {
            int temp = max(prev + nums[i], curr);
            prev = curr;
            curr = temp;
        }
        return curr;
    }
};
