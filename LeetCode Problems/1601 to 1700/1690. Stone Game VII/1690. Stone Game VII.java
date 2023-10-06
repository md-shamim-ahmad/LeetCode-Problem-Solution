class Solution {
    public int stoneGameVII(int[] S) {
        int N = S.length;
        int[] dpCurr = new int[N], dpLast = new int[N];
        for (int i = N - 2; i >= 0; i--) {
            int total = S[i];
            int[] temp = dpLast;
            dpLast = dpCurr;
            dpCurr = temp;
            for (int j = i + 1; j < N; j++) {
                total += S[j];
                dpCurr[j] = Math.max(total - S[i] - dpLast[j], total - S[j] - dpCurr[j - 1]);
            }
        }
        return dpCurr[N - 1];
    }
}
