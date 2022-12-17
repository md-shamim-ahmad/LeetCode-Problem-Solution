class Solution {
public:
    int minOperations(int n) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = 2 * i + 1;
        }
        int l = 0, r = n - 1, cnt = 0;
        while (l <= r) {
            cnt += abs(arr[l] - arr[r]) / 2;
            l++, r--;
        }
        return cnt;
    }
};