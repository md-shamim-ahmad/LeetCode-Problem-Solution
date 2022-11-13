class Solution {
    public String reverseWords(String s) {        
        ArrayList<String> words = new ArrayList<String>();
        for (String st : s.split(" ")) {
            if (st.length() != 0) {
                words.add(st);
            }
        }
        String str = words.get(words.size() - 1);
        for (int i = words.size() - 2; i >= 0; i--) {
            str += " ";
            str += words.get(i)            ;
        }
        return str;
    }
}
