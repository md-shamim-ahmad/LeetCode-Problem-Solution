class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            ans = max(ans, nums[i + 1] - nums[i]);
        }
        return ans;
    }
};