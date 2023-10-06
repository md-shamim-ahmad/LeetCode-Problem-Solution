class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n) {
        if (m * n != original.size())
            return {};
        vector<vector<int>> arr(m, vector<int>(n));
        for (int i = 0, k = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = original[k++];
            }
        }
        return arr;
    }
};
