class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums) {
        int n = nums.size();
        vector<int> prefix(n + 1), ans;
        prefix[0] = 0;

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        for (int i = 0; i < n; i++) {
            int p = nums[i] * i - prefix[i];
            int q = prefix[n] - prefix[i + 1] - nums[i] * (n - i - 1);
            ans.push_back(p + q);
        }
        return ans;
    }
};