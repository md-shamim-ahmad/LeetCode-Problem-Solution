class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> arr(matrix.size(),vector<int>(matrix.size()));
        for (int i = 0; i < matrix.size(); i++) {
            int k = 0;
            for (int j = matrix[i].size() - 1; j >= 0; j--) {
                arr[i][k++] = matrix[j][i];
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                matrix[i][j] = arr[i][j];
            }
        }
    }
};