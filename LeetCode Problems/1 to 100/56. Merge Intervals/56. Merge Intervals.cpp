class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &ar) {
        sort(ar.begin(), ar.end());
        vector<vector<int>> ans;
        for (int i = 0; i < ar.size(); i++) {
            if (ans.size() == 0 or ans.back()[1] < ar[i][0]) {
                ans.push_back({ar[i][0], ar[i][1]});
            } else
                ans.back()[1] = max(ans.back()[1], ar[i][1]);
        }
        return ans;
    }
};