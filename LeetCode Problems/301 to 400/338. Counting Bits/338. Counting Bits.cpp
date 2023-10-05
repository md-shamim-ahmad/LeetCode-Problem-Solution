class Solution {
public:
    int binaryNum(int n) {
        int res = 0;
        while (n != 0) {
            int r = n % 2;
            res += r;
            n /= 2;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; i++) {
            ans[i] = binaryNum(i);
        }
        return ans;
    }
};