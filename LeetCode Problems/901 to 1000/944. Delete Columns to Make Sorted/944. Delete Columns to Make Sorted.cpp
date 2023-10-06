class Solution {
public:
    int minDeletionSize(vector<string> &strs) {
        int cnt = 0, n = strs[0].size(), m = strs.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (strs[j][i] > strs[j + 1][i]) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};