class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> vct(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            vct[nums[i - 1]]++;
        }
        int missing_num, duplicate_num;
        for (int i = 1; i <= n; i++) {
            if(vct[i] == 0) {
                missing_num = i;
            }
            if(vct[i] > 1) {
                duplicate_num = i;
            }
        }
        return {duplicate_num, missing_num};
    }
};
