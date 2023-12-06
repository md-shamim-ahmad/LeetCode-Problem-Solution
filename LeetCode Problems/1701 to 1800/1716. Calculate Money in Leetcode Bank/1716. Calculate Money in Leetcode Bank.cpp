class Solution {
    int totalSum(int n) {
        return (long long) (n * (long long) (n + 1)) / 2;
    }

public:
    int totalMoney(int n) {
        int cnt = 1, sum = 0;
        while (n > 0) {
            sum += (totalSum(cnt + min(n - 1, 6)) - totalSum(cnt - 1));
            cnt++;
            n -= 7;
        }
        return sum;
    }
};