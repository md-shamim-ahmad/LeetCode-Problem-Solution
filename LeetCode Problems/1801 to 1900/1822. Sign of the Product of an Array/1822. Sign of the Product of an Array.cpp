class Solution {
public:
    int arraySign(vector<int> &nums) {
        int sign = 0;
        for (auto it: nums) {
            if (it == 0) return 0;
            if (it < 0) sign++;
        }
        return sign % 2 == 0 ? 1 : -1;
    }
};