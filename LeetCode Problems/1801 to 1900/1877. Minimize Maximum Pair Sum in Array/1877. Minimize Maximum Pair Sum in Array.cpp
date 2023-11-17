class Solution {
public:
    int minPairSum(vector<int> &nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        sort(nums.begin(), nums.end());
        int ans = INT_MIN;
        for (int l = 0, r = nums.size() - 1; l <= r; l++, r--) {
            ans = max(ans, nums[l] + nums[r]);
        }
        return ans;
    }
};