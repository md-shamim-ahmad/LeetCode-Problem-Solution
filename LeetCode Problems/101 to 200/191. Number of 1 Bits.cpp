class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while (n != 0) {
            cnt += n % 2;
            n /= 2;
        }
        return cnt;
    }
};