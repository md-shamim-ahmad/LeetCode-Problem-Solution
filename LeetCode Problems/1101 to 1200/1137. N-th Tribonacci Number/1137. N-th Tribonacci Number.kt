class Solution {
    fun tribonacci(n: Int): Int {
        if(n == 0) return 0;
        else if (n <= 2) return 1;
        var a = 0; var b = 1; var c = 1; var ans = 0;  
        for (i in 3..n) {
            ans = a + b + c;
            a = b; b = c; c = ans;
        }
        return ans;
    }
}