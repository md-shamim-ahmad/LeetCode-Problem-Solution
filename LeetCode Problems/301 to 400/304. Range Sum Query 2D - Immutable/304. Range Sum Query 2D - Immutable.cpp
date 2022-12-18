class NumMatrix {
    vector<vector<int>> prefixSum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        prefixSum.resize(matrix.size() + 1, vector<int> (matrix[0].size() + 1));
        for (int i = 1; i < prefixSum.size(); i++) {
            for (int j = 1; j < prefixSum[i].size(); j++) {
                prefixSum[i][j] = matrix[i - 1][j - 1];
            }
        }
        for (int i = 0; i < prefixSum.size(); i++) {
            for (int j = 1; j < prefixSum[i].size(); j++) {
                prefixSum[i][j] += prefixSum[i][j - 1];
            }
        }
        for (int i = 1; i < prefixSum.size(); i++) {
            for (int j = 0; j < prefixSum[i].size(); j++) {
                prefixSum[i][j] += prefixSum[i - 1][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return prefixSum[row2 + 1][col2 + 1] - prefixSum[row2 + 1][col1] - prefixSum[row1][col2 + 1] + prefixSum[row1][col1];
    }
};