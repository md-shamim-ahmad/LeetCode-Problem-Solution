class Solution {
public:
    int partitionString(string s) {
        map<char, int> mp;
        int ans = 1;
        for (char ch: s) {
            if (mp[ch] >= 1) {
                ans++;
                mp.clear();
            }
            mp[ch]++;
        }
        return ans;
    }
};