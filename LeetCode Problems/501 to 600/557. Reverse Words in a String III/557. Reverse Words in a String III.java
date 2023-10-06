class Solution {
    private void reverse(char[] s, int l, int r) {
        while (l < r) {
            char temp = s[l];
            s[l++] = s[r];
            s[r--] = temp;
        }
    }
    public String reverseWords(String s) {
        char[] res = s.toCharArray();
        for (int i = 0, l = 0; i < res.length; i++) {
            if (res[i] == ' ') {
                reverse(res, l, i - 1);
                l = i + 1;
            } else if (i == res.length - 1) {
                reverse(res, l, i);
            }
        }
        return new String(res);
    }
}
