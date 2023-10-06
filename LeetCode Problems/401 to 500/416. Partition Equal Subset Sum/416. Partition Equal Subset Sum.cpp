class Solution {
public:
    bool canPartition(vector<int> &nums) {
        if (nums.size() == 1) return false;
        int sum = 0;
        for (auto it: nums) sum += it;
        if (sum % 2 == 0) {
            bitset<20001> bits(1);
            for (auto it: nums) {
                bits |= bits << it;
            }
            return bits[sum / 2];
        } else {
            return false;
        }
    }
};
