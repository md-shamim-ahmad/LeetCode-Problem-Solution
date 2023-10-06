class Solution {
public:
    int minMaxGame(vector<int> &nums) {
        int n = nums.size();
        while (n != 1) {
            vector<int> arr;
            int k = 0;
            for (int i = 0; i < nums.size() / 2; i++) {
                if (i % 2 == 0) {
                    arr.push_back(min(nums[2 * i], nums[2 * i + 1]));
                } else {
                    arr.push_back(max(nums[2 * i], nums[2 * i + 1]));
                }
            }
            n /= 2;
            nums = arr;
        }
        return nums[0];
    }
};