class Solution:
    def halvesAreAlike(self, s, vwls=set(list("aeiouAEIOU"))):    
        return (sum(c in vwls for c in s[:len(s)//2]) == sum(c in vwls for c in s[len(s)//2:]))
