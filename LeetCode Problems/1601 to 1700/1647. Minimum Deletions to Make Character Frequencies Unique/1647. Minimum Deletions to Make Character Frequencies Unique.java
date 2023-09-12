class Solution {
    private int search(int []arr, int l, int r, int x) {
        for (; l < r; l++) {
            if (arr[l] == x) return l;
        }
        return -1;
    }
    public int minDeletions(String s) {
        int []arr = new int[26];
        for (Character ch : s.toCharArray()) {
            arr[ch - 'a']++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            while(search(arr, 0, i, arr[i]) != -1 || search(arr, i + 1, 26, arr[i]) != -1) {
                if(arr[i] - 1 < 0) break;
                arr[i] -= 1;
                cnt++;
            }
        }
        return cnt;
    }
};