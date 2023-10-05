/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
typedef long long int ll;
class Solution {
public:
    int guessNumber(int n) {
        ll f = 1;
        while (f <= n) {
            int m = (f + n) / 2;
            int gues = guess(m);
            if (gues == 0) {
                return m;
            } else if (gues == 1) {
                f = m + 1;
            } else
                n = m - 1;
        }
        return 0;
    }
};