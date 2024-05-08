class Solution {
public:
    vector<string> findRelativeRanks(vector<int> &score) {
        vector<pair<int, int>> arr;
        vector<string> ans(score.size());
        for (int i = 0; i < score.size(); i++) {
            arr.push_back({score[i], i});
        }
        sort(arr.rbegin(), arr.rend());
        for (int i = 0; i < score.size(); i++) {
            if (i == 0)
                ans[arr[i].second] = "Gold Medal";
            else if (i == 1)
                ans[arr[i].second] = "Silver Medal";
            else if (i == 2)
                ans[arr[i].second] = "Bronze Medal";
            else
                ans[arr[i].second] = to_string(i + 1);
        }
        return ans;
    }
};