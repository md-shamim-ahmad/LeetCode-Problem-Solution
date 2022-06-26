class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }
        for (int i = 0; i < operations.size(); i++) {
            int x = operations[i][0], y = operations[i][1];
            int idx = mp[x];
            nums[idx] = y;
            mp.erase(x);
            mp[y] = idx;
        }
        return nums;
    }
};