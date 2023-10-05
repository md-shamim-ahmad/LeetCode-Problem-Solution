class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches) {
        map<int, int> lose, wine;
        for (int i = 0; i < matches.size(); i++) {
            wine[matches[i][0]]++, lose[matches[i][1]]++;
        }
        vector<vector<int>> ans(2);
        for (auto it: wine) {
            if (lose[it.first] == 0)
                ans[0].push_back(it.first);
        }
        for (auto it: lose) {
            if (it.second == 1)
                ans[1].push_back(it.first);
        }
        return ans;
    }
};
