class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;
        int l = 0, r = n * m - 1;
        while (l <= r) {
            int mid = r + (l - r) / 2;
            int ele = matrix[mid / m][mid % m];
            if (ele == target)
                return true;
            else if (ele < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return false;
    }
}
