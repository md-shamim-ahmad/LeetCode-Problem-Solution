class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int n = nums.size(), cnt = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                cnt++;
            else
                ans.push_back(nums[i]);
        }
        for (int i = 0; i < cnt; i++)
            ans.push_back(0);
        nums = ans;
    }
};
