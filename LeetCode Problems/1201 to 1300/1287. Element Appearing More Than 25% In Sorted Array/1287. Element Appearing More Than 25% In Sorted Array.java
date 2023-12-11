class Solution {
    public int findSpecialInteger(int[] arr) {
        int mx = -1, pos = 0, n = arr.length;
        for (int i = 1; i < n; i++) {
            int cnt = 0;
            while (i + 1 <= n && arr[i] == arr[i - 1]) {
                cnt++;
                i++;
            }
            if (cnt > mx) {
                mx = cnt;
                pos = i - 1;
            }
        }
        return arr[pos];
    }
}