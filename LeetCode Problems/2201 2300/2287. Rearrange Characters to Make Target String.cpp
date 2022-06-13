class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        map<char, int> mp_for_target;
        for (auto it : target) {
            mp_for_target[it]++;
        }
        int ans = INT_MAX;   
        for (int i = 0; i < target.size(); i++) {
            ans = min(ans, mp[target[i]] / mp_for_target[target[i]]);
        }
        return ans;      
    }
};