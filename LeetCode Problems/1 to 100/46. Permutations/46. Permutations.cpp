class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> permuteArr;
        do {
            vector<int> a;
            for (int i = 0; i < n; i++)
                a.push_back(nums[i]);
            permuteArr.push_back(a);
        } while (next_permutation(nums.begin(), nums.end()));
        return permuteArr;
    }
