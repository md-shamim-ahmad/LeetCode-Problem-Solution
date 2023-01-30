class Solution:
    def tribonacci(self, n: int) -> int:
        if n == 0: return 0
        elif n <= 2: return 1
        a = 0;b = 1;c = 1;ans = 0
        for i in range (3, n+1):
            ans = a + b + c
            a = b;b = c;c = ans
        return ans