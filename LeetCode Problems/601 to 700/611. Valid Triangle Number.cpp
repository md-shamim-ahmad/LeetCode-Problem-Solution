class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0, n = nums.size();
        for (int i = 0; i < n; i++) {            
            if (nums[i] == 0)
                continue;
            int k = i + 2;
            for (int j = i + 1; j < n - 1; j++) {
                int sum = nums[i] + nums[j];
                while (k < n && sum > nums[k])
                    k++;
                cnt += k - j - 1;
            }
        }        
        return cnt;
    }
};