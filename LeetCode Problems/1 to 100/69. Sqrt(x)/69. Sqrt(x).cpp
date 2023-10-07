class Solution {
public:
    int mySqrt(int x) {
        long start, mid, end;

        if (x == 0 || x == 1)
            return x;
        start = 0;
        end = x / 2;
        while (start < end) {
            mid = (start + end) / 2;
            if (mid == start)
                return end * end <= x ? end : mid;
            if (mid * mid < x)
                start = mid;
            else if (mid * mid > x)
                end = mid;
            else
                return mid;
        }
        return mid;
    }
};
