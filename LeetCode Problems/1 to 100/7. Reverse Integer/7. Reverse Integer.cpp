class Solution {
public:
    int reverse(int x) {
        long long rev_x = 0;
        while (x != 0) {
            int rem = x % 10;
            rev_x = rev_x * 10 + rem;
            x /= 10;
            if (rev_x > INT_MAX || rev_x < INT_MIN)
                return 0;
        }
        return rev_x;
    }
};
