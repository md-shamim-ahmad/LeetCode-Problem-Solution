class Solution {
public:
    bool isMonotonic(vector<int> &nums) {
        bool check = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] >= nums[i])
                check = true;
            else {
                check = false;
                break;
            }
        }
        if (check == true)
            return check;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] <= nums[i])
                check = true;
            else {
                check = false;
                break;
            }
        }
        return check;
    }
};