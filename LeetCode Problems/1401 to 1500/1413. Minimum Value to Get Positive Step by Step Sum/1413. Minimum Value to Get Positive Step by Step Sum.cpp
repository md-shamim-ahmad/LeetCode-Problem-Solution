class Solution {
public:
    int minStartValue(vector<int>& nums) {
        for (int i = 1; i < INT_MAX; i++) {
            int startValue = i;
            bool check = true;
            for (int j = 0; j < nums.size(); j++) {
                startValue += nums[j];
                if (startValue <= 0) {
                    check = false;
                    break;
                }
            }
            if (check == true) {
                return i;
            }
        }
        return 0;
    }
};