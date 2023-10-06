class Solution {
    int sum[10] = {};
    int ans = 1000000000;

public:
    void calculate(vector<int> &arr, int n, int k) {
        if (n == arr.size()) {
            int max = 0;
            for (int i = 0; i < k; i++) {
                max = std::max(max, sum[i]);
            }
            ans = min(max, ans);
            return;
        }
        for (int i = 0; i < k; i++) {
            sum[i] += arr[n];
            calculate(arr, n + 1, k);
            sum[i] -= arr[n];
        }
    }
    int distributeCookies(vector<int> &cookies, int k) {
        calculate(cookies, 0, k);
        return ans;
    }
};