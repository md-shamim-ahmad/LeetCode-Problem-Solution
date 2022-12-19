class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++)  {
            if (nums[i] == 0) {
                ans = max(cnt, ans);
                cnt = 0;
            } else {
                cnt++;
            }
        }
        ans = max(ans, cnt);
        return ans;
    }
};
