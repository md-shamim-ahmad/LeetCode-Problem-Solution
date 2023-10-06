class Solution {
public:
    int maxPower(string s) {
        int ans = 1;
        for (int i = 0; i < s.size() - 1;) {
            if (s[i] == s[i + 1]) {
                int cnt = 1;
                while (s[i] == s[i + 1]) {
                    cnt++, i++;
                }
                ans = max(ans, cnt);
            } else
                i++;
        }
        return ans;
    }
};
