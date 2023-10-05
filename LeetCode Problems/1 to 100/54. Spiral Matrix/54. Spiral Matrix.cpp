class Solution {

public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        int left = 0, right = matrix[0].size() - 1, up = 0,
            down = matrix.size() - 1;
        vector<int> spiral_matrix;
        int m = matrix[0].size() * matrix.size(), k = 1;
        while (k <= m) {
            for (int i = left; i <= right && k <= m; i++, k++) {
                spiral_matrix.push_back(matrix[up][i]);
            }
            for (int i = up + 1; i <= down && k <= m; i++, k++) {
                spiral_matrix.push_back(matrix[i][right]);
            }
            for (int i = right - 1; i >= left && down != up && k <= m; i--, k++) {
                spiral_matrix.push_back(matrix[down][i]);
            }
            for (int i = down - 1; i > up && left != right && k <= m; i--, k++) {
                spiral_matrix.push_back(matrix[i][left]);
            }
            left += 1, up += 1, right -= 1, down -= 1;
        }
        return spiral_matrix;
    }
};