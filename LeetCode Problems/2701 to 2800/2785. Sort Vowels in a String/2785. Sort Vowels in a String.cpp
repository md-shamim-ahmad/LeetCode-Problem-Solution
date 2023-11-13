class Solution {
    bool isVowel(char ch) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }

public:
    string sortVowels(string s) {
        vector<char> vowels;
        for (char ch: s) {
            if (isVowel(ch))
                vowels.push_back(ch);
        }
        sort(vowels.begin(), vowels.end());
        for (int i = 0, j = 0; i < s.size() && j < vowels.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = vowels[j++];
            }
        }

        return s;
    }
};
