typedef long long ll;

class Solution {
    vector<string> ans;

public:
    void insert(ll curr, ll prev) {
        if (curr == prev)
            ans.push_back(to_string(curr));
        else
            ans.push_back(to_string(curr) + "->" + to_string(prev));
    }
    vector<string> summaryRanges(vector<int> &nums) {
        if (nums.size() == 0) return {};
        ll curr = nums[0], prev = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - prev == 1) {
                prev = nums[i];
                continue;
            }
            insert(curr, prev);
            curr = prev = nums[i];
        }
        insert(curr, prev);
        return ans;
    }
};