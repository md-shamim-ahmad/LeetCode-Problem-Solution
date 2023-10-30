class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int sum = 0, length = INT_MAX, l = 0;
        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];
            while (sum >= target) {
                length = min(length, r - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        return length == INT_MAX ? 0 : length;
    }
};