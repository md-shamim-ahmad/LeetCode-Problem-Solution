/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        int l = 1, m, pick;
        while (l <= n) {
            m = l + (n - l) / 2;
            pick = guess(m);
            if (pick == 0)
                return m;
            else if (pick == -1)
                n = m - 1;
            else
                l = m + 1;
        }
        return 0;
    }
}
