class Solution {
public:
    bool static cmp(const pair<int, int> &a, const pair<int, int> &b) {
        return a.second > b.second;//Sort the input_list based on second element
    }
    string frequencySort(string s) {
        map<char, int> mp;
        vector<pair<char, int>> vct;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        for (auto it: mp) {
            vct.emplace_back(it.first, it.second);
        }
        sort(vct.begin(), vct.end(), cmp);
        s = "";
        for (auto it: vct) {
            for (int i = 0; i < it.second; i++)
                s += it.first;
        }
        return s;
    }
};
