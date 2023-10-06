class Solution {
    public int minAddToMakeValid(String s) {
        int cnt = 0;
        String str = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(')
                str += s.charAt(i);
            else {
                if (s.charAt(i) == ')' && str.length() > 0) {
                    StringBuilder sb = new StringBuilder(str);
                    sb.deleteCharAt(0);
                    str = sb.toString();
                } else
                    cnt++;
            }
        }
        return cnt + str.length();
    }
}
