class Solution {
public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        int l = matrix[0][0], n = matrix.size(), r = matrix[n - 1][n - 1];
        while (l <= r) {
            int m = (l + r) / 2, result = 0;
            for (int i = 0; i < n; i++) {
                result += upper_bound(matrix[i].begin(), matrix[i].end(), m) -
                          matrix[i].begin();
            }
            if (result < k)
                l = m + 1;
            else
                r = m - 1;
        }
        return l;
    }
};
