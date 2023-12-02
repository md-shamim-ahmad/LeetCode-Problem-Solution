class Solution {
public:
    int countCharacters(vector<string> &words, string chars) {
        map<char, int> mp;
        int cnt = 0;
        for (char ch: chars) {
            mp[ch]++;
        }
        for (string s: words) {
            map<char, int> m;
            for (char ch: s) {
                m[ch]++;
            }
            bool check = true;
            for (char ch: s) {
                if (m[ch] > mp[ch]) {
                    check = false;
                    break;
                }
            }
            if (check)
                cnt += s.size();
        }
        return cnt;
    }
};