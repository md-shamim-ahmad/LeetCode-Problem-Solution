class Solution {
    fun integerBreak(n: Int): Int {
        if (n <= 3)
            return n - 1;
        var ans = 1;
        var num = n;
        while (num > 4) {
            ans *= 3;
            num -= 3;
        }
        return ans * num;
    }
}