class Solution {
public:
    int minOperations(vector<int> &nums, int x) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum < x)
            return -1;
        if (sum == x)
            return nums.size();
        int diff = sum - x, j = 0, ans = 0, curr_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            curr_sum += nums[i];
            while (curr_sum > diff) {
                curr_sum -= nums[j++];
            }
            if (curr_sum == diff)
                ans = max(ans, i - j + 1);
        }
        return (ans == 0) ? -1 : nums.size() - ans;
    }
};