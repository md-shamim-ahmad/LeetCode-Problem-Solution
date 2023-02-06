class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j = n, k = 0, i = 0;
        vector<int> ans(nums.size());
        for (i = 0; i < nums.size() && k < n && j < nums.size(); i++) {
            ans[i] = nums[k];
            ans[++i] = nums[j];
            j++, k++;
        }
        return ans;
    }
};