// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int search(long l, long r) {
        while (l <= r) {
            long long m = (l + r) / 2;
            if (isBadVersion(m) && !isBadVersion(m - 1)) {
                return (int) m;
            }
            if (!isBadVersion(m)) {
                return search(m + 1, r);
            }
            return search(l, m);
        }
        return l;
    }
    int firstBadVersion(int n) { return search(1, (long long) n); }
};