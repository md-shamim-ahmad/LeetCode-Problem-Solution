class Solution {
public:
    bool bs (vector<int>& arr, int val) {
        int f = 0, l = arr.size() - 1;
        while (f <= l) {
            int m = (l + f) / 2;
            if (arr[m] == val)
                return true;
            else if (arr[m] < val)
                f = m + 1;
            else
                l = m - 1;
        }
        return false;
    }

    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int repeat, value;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                repeat = nums[i];
            }
        }        
        for (int i = 0; i < nums.size(); i++) {
            if (!bs(nums, (i + 1))) {
                value = i + 1;
                break;
            }
        }
        return {repeat, value};
    }
};

