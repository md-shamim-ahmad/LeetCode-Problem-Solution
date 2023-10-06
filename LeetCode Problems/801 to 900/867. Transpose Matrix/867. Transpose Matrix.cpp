class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix) {
        int n = matrix.size();
        vector<vector<int>> transpos(matrix[0].size(), vector<int>(n));
        for (int i = 0; i < matrix[0].size(); i++) {
            for (int j = 0; j < n; j++) {
                transpos[i][j] = matrix[j][i];
            }
        }
        return transpos;
    }
};