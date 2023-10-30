class Solution {
    inline bool isVowel(char ch) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }

public:
    bool halvesAreAlike(string s) {
        int l = s.size() / 2, cnt_half = 0, cnt_another_half = 0;
        for (int i = 0, j = l; i < l && j < s.size(); i++, j++) {
            if (isVowel(s[i])) cnt_half++;
            if (isVowel(s[j])) cnt_another_half++;
        }
        return cnt_another_half == cnt_half;
    }
};
