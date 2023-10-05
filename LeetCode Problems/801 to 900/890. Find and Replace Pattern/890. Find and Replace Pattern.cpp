class Solution {
private:
    vector<string> value;
    string permutation(string s) {
        string rep = "";
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) == mp.end()) {
                mp.insert({s[i], i + 1});
                rep += to_string(i + 1);
            } else {
                mp.insert({s[i], mp[s[i]]});
                rep += to_string(mp[s[i]]);
            }
        }
        return rep;
    }

public:
    vector<string> findAndReplacePattern(vector<string> &words, string pattern) {
        auto res = permutation(pattern);
        for (auto it: words) {
            if (res == permutation(it))
                value.push_back(it);
        }
        return value;
    }
};
