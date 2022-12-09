class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
            }
        }
        return nums.size();
    }
};
