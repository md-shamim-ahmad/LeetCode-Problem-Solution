class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> arr;
        vector<vector<int>> ans;
        int l, r, n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            l = i + 1, r = n - 1;
            while (l < r) {
                if (nums[i] + nums[l] + nums[r] == 0) {
                    arr.insert({nums[i], nums[l], nums[r]});
                    l++, r--;
                }
                else if (nums[i] + nums[l] + nums[r] > 0) {
                    r--;
                } else {
                    l++;
                }
            }
        }
        for (auto it = arr.begin(); it != arr.end(); it++) {
            ans.push_back(*it);
        }
        return ans;
    }
};

