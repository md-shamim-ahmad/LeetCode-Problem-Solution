# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n):
        l = 1
        while l <= n:
            m = l + (n - l) // 2
            pick = guess(m)
            if pick == 0:
                return m
            elif pick == -1:
                n = m - 1
            else:
                l = m + 1
        return 0