class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() < 1)
            return 0;
        int ans = 0;
        int i = 0, j = 0;
        set<char> dc;
        while (i < s.length()) {
            char ch = s[i];
            while (dc.find(ch) != dc.end()) {
                dc.erase(s[j]);
                ++j;
            }
            dc.insert(ch);
            ans = max(ans, i - j  + 1);
            ++i;
        }
        return ans;
    }
};
