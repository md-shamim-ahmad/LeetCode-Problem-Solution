class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> val1(26), val2(26);
        set<char> s1, s2;
        for (auto it: word1) {
            val1[it - 'a']++;
            s1.insert(it);
        }
        for (auto it: word2) {
            val2[it - 'a']++;
            s2.insert(it);
        }
        sort(val1.begin(), val1.end()), sort(val2.begin(), val2.end());
        return val1 == val2 && s1 == s2;
    }
};