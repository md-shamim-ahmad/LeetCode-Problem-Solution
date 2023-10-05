class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> mp;
        for (int i = 0; i < t.size(); i++) {
            mp[t[i]]++;
        }
        int left = 0, right = 0, t_length = t.size(), min_length = 1e7, start = 0;
        while (right < s.size()) {
            if (--mp[s[right++]] >= 0)
                t_length--;
            while (t_length == 0) {
                if (right - left < min_length) {
                    min_length = right - left;
                    start = left;
                }
                if (++mp[s[left++]] > 0) t_length++;
            }
        }
        return min_length < 1e7 ? s.substr(start, min_length) : "";
    }
};