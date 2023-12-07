class Solution {
    public String largestOddNumber(String num) {
        int pos = -1;
        for (int i = 0; i < num.length(); i++) {
            if ((num.charAt(i) - '0') % 2 == 1) {
                pos = i;
            }
        }
        if (pos < 0) return "";
        return num.substring(0, pos + 1);
    }
}