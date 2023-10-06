class Solution {
    public int minDeletionSize(String[] strs) {
        int cnt = 0, n = strs[0].length(), m = strs.length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (strs[j].charAt(i) > strs[j + 1].charAt(i)) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
}
