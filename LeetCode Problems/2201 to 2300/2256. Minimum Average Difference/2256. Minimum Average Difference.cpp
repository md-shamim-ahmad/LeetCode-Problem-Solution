class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long long> num(nums.size());
        num[0] = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++) {
            num[i] = nums[i];
            num[i] += num[i - 1];
        }
        int mn = INT_MAX, pos = 0;
        for(int i = 0; i < n; i++) {
            int diff;
            if(i + 1 == n)
                diff = abs(num[i] / (i + 1));
            else
                diff = abs(num[i] / (i + 1) - ((num[n - 1] - num[i]) / (n - (i + 1))));
            if (diff < mn){
                mn = diff;
                pos = i;
            }
        }
        return pos;
    }
};
