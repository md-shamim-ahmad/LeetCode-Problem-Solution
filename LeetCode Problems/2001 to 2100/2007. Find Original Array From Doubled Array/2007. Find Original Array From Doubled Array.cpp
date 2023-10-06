class Solution {
public:
    vector<int> findOriginalArray(vector<int> &changed) {
        sort(changed.begin(), changed.end());
        if (changed[0] == changed[changed.size() - 1] && changed[0] > 0)
            return {};
        vector<int> ans;
        for (int i = 0; i < changed.size(); i++) {
            if (changed[i] < 0)
                continue;
            auto pos = lower_bound(changed.begin() + i + 1, changed.end(), changed[i] * 2);
            if ((pos - changed.begin()) >= changed.size())
                continue;
            if ((pos - changed.begin()) != i && *pos == 2 * changed[i]) {
                ans.push_back(changed[i]);
                *pos = -1;
            }
        }
        if (ans.size() * 2 == changed.size())
            return ans;
        return {};
    }
};