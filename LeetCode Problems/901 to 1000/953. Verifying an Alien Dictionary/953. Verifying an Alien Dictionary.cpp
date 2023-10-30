class Solution {
public:
    bool isAlienSorted(vector<string> &words, string order) {
        map<char, int> mp;
        for (int i = 0; i < order.size(); i++)
            mp[order[i]] = i;
        vector<pair<string, int>> list;
        int k = 0;
        for (auto s: words) {
            string str = "";
            for (int i = 0; i < s.size(); i++) {
                str += ('a' + mp[s[i]]);
            }
            list.emplace_back(str, k++);
        }
        sort(list.begin(), list.end());
        for (int i = 0; i < list.size(); i++) {
            if (i != list[i].second)
                return false;
        }
        return true;
    }
};