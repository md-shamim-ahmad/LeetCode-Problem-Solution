class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int f = -1, l = -1;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target && cnt <= 0) {
                ++cnt;
                f = i;
                continue;
            }
            if (nums[i] == target && cnt >= 1)
                l = i;
        }
        if (l == -1)
            l = f;
        return {f, l};
    }
};
