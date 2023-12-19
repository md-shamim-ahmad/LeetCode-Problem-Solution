class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img) {
        int n = img.size(), m = img[0].size();
        vector<vector<int>> res(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = 0, cnt = 0;
                for (int k = max(0, i - 1); k < min(n, i + 2); k++) {
                    for (int l = max(0, j - 1); l < min(m, j + 2); l++) {
                        sum += img[k][l];
                        cnt++;
                    }
                }
                res[i][j] = sum / cnt;
            }
        }
        return res;
    }
};