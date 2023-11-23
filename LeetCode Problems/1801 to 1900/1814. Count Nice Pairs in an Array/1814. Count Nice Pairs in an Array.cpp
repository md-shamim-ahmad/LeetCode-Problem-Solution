class Solution {
private:
    int reverse(int num) {
        int ans = 0;
        while (num > 0) {
            ans = ans * 10 + num % 10;
            num /= 10;
        }
        return ans;
    }
    long long calculatePair(long long n) {
        return (n * (n - 1)) / 2;
    }

public:
    int countNicePairs(vector<int> &nums) {
        const int inf = 1000000007;
        vector<int> ress;

        for (int i = 0; i < nums.size(); i++) {
            ress.push_back(nums[i] - reverse(nums[i]));
        }
        sort(ress.begin(), ress.end());
        int ans = 0;
        for (int i = 0; i < ress.size() - 1; i++) {
            long long cnt = 1;
            while (i < ress.size() - 1 && ress[i] == ress[i + 1]) {
                cnt++;
                i++;
            }
            ans += calculatePair(cnt) % inf;
        }
        return ans % inf;
    }
};