class Solution {
public:
    bool isVowel(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (isVowel(s[l]) && isVowel(s[r])) {
                swap(s[l], s[r]);
                l++, r--;
            }
            if (!isVowel(s[l]))
                l++;
            if (!isVowel(s[r]))
                r--;
        }
        return s;
    }
};