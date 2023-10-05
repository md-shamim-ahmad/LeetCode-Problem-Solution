class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend < 0 && divisor < 0) {
            if (divisor == INT_MIN)
                divisor += 1;
            divisor *= -1;
            if (dividend == INT_MIN)
                dividend += 1;
            dividend *= -1;
        }
        return (dividend / divisor);
    }
};
