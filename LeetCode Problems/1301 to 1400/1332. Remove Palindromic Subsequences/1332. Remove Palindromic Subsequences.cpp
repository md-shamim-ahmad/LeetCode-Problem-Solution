class Solution {
public:
    int removePalindromeSub(string s) {
        string str = s;
        if (s.size() < 0)
            return 0;
        reverse(s.begin(), s.end());
        if (str == s) return 1;
        else
            return 2;
    }
};