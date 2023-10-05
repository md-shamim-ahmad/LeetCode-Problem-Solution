class Solution {
public:
    vector<int> partitionLabels(string s) {
        int map[26];
        for (int i = 0; i < s.size(); i++) {
            map[s[i] - 'a'] = i + 1;
        }
        int size = 0, r = 0;
        vector<int> arr;
        for (int l = 0; l < s.size(); l++) {
            if (l == r && l != 0) {
                arr.push_back(size);
                size = 0;
            }
            if (l <= r) {
                r = max(r, map[s[l] - 'a']);
                size++;
            }
        }
        arr.push_back(size);
        return arr;
    }
};