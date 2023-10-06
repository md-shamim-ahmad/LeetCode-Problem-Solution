class Solution {
    public String makeGood(String s) {
        StringBuffer str = new StringBuffer(s);
        int i = 0;
        while (i < str.length() - 1) {
            if (Character.toLowerCase(str.charAt(i)) == Character.toLowerCase(str.charAt(i + 1)) && (Character.isUpperCase(str.charAt(i)) == Character.isLowerCase(str.charAt(i + 1)))) {
                str.deleteCharAt(i);
                str.deleteCharAt(i);
                if (i > 0)
                    i--;
                else
                    i = 0;
                continue;
            }
            i += 1;
        }
        return str.toString();
    }
}
