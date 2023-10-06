class Solution {
public:
    int maximumUniqueSubarray(vector<int> &nums) {
        unordered_set<int> mp;
        int curr_sum = 0, sum = 0, i = 0, j = 0;
        while (i < nums.size() && j < nums.size()) {
            if (mp.find(nums[i]) == mp.end()) {
                mp.insert(nums[i]);
                curr_sum += nums[i];
                sum = max(curr_sum, sum);
                i++;
            } else {
                mp.erase(nums[j]);
                curr_sum -= nums[j];
                j++;
            }
        }
        return sum;
    }
};