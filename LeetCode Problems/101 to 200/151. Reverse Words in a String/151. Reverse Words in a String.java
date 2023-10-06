class Solution {
    public String reverseWords(String s) {
        s = s.trim();
        String words[] = s.split(" ");
        s = "";
        for (int i = words.length - 1; i >= 0; i--) {
            if (words[i].trim().length() == 0) continue;
            s += words[i] + (i == 0 ? "" : " ");
        }
        return s;
    }
}
