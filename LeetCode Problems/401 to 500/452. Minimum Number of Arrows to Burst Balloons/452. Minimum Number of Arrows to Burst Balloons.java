class Solution {
    public int findMinArrowShots(int[][] points) {
        Arrays.sort(points, (int[] a, int[] b) -> Integer.compare(a[1], b[1]));
        int ans = 0, res = 0;
        for (int i = 0; i < points.length; i++) {
            if (ans == 0 || points[i][0] > res) {
                ans++;
                res = points[i][1];
            }
        }
        return ans;
    }
}
