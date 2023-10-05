class Solution {
public:
    int countRangeSum(vector<int> &nums, int lower, int upper) {
        int res = 0;
        long long sum = 0;
        multiset<long long> sums;
        sums.insert(0);
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            res += distance(sums.lower_bound(sum - upper),
                            sums.upper_bound(sum - lower));
            sums.insert(sum);
        }
        return res;
    }
};