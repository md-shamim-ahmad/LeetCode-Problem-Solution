class Solution {
public:
    int kthFactor(int n, int k) {
        int ans = 0, i = 1;
        while (k != 0) {
            if (i > n)
                return -1;
            if (n % i == 0) {
                i++;
                k--;
            } else
                i++;
        }
        return i - 1;
    }
};
