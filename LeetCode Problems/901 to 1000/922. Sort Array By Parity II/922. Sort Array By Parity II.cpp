class Solution {
public:
    vector<int> sortArrayByParityII(vector<int> &nums) {
        vector<int> odd, even;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        for (int i = 0, j = 0, k = 0; i < nums.size(); i++) {
            if ((i + 1) % 2 == 0)
                nums[i] = odd[j++];
            else
                nums[i] = even[k++];
        }
        return nums;
    }
};
