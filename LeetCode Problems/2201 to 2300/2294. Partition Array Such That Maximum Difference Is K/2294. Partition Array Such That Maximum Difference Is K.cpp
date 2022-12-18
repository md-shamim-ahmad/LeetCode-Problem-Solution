class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        int cnt = 0, start = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (start-nums[i] > k) {
                start = nums[i];
                cnt++;
            }
        }
        return cnt + 1;
    }
};