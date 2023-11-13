class Solution {
public:
    int countSubarrays(vector<int> &nums, int k) {
        int n = nums.size(), ind = -1;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (nums[i] == k) {
                ind = i;
                break;
            }
        }
        int diff = 0;
        for (int i = ind; i >= 0; i--) {
            if (nums[i] < k)
                diff--;
            else if (nums[i] > k)
                diff++;
            mp[diff] = mp[diff] + 1;
        }
        int count = mp[0] + mp[1];
        int currdiff = 0;
        for (int i = ind + 1; i < n; i++) {
            if (nums[i] < k) currdiff--;
            else
                currdiff++;
            count += mp[-currdiff];
            count += mp[1 - currdiff];
        }
        return count;
    }
};
