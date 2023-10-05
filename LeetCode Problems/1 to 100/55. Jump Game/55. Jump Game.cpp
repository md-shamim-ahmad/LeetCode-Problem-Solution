class Solution {
public:
    bool canJump(vector<int> &nums) {
        int max = 0;
        for (int i = 0; i <= max; i++) {
            max = std::max(i + nums[i], max);
            if (max >= nums.size() - 1)
                return true;
        }
        return false;
    }
};
