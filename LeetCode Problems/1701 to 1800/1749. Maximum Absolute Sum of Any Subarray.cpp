class Solution {
public:
    
    int maxAbsoluteSum(vector<int>& nums) {
        int result = 0, mn = 0, mx = 0;
        for (int i = 0; i < nums.size(); i++) {
            mn += nums[i];
            result = max(result, abs(mn));
            mn = min(mn, 0);
            mx += nums[i];
            result = max(result, abs(mx));
            mx = max(mx, 0);
        }
        return result;
    }
};