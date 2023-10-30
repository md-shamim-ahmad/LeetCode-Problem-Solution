class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<pair<int, int>> arr;
        for (int i = 0; i < nums.size(); i++)
            arr.emplace_back(nums[i], i);
        sort(arr.begin(), arr.end());

        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int sum = arr[l].first + arr[r].first;
            if (sum == target) {
                return {arr[l].second, arr[r].second};
            } else if (sum < target)
                l++;
            else
                r--;
        }
        return {-1, -1};
    }
};
