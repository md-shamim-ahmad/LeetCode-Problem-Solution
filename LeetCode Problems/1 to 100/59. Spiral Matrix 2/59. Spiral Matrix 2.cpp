class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n));
        int num = 1;
        int r1 = 0, r2 = n - 1, c1 = n - 1, c2 = 0;
        while (num <= n * n) {
            for (int i = r1; i <= r2; i++) {
                mat[r1][i] = num;
                num++;
            }
            r1++;
            for (int i = c2 + 1; i <= c1; i++) {
                mat[i][c1] = num;
                num++;
            }
            c1--;
            for (int i = r2 - 1; i >= r1 - 1; i--) {
                mat[r2][i] = num;
                num++;
            }
            r2--;
            for (int i = c1; i >= c2 + 1; i--) {
                mat[i][c2] = num;
                num++;
            }
            c2++;
        }
        return mat;
    }
};