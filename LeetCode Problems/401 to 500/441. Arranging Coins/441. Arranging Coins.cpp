class Solution {
public:
    int arrangeCoins(int s) {
        return (int)(-1 + sqrt(1 + 8 * (long long)s)) / 2;
    }
};
