import java.util.Vector;

class Solution {
    class Pair {
        private Character ch;
        private String s;
        Pair(Character ch, String s) {
            this.ch = ch;
            this.s = s;
        }
        public Character getCh() {
            return ch;
        }
        public String getS() {
            return s;
        }
    }
    public boolean wordPattern(String pattern, String s) {
        String[] list = s.split("\\s");
        if (list.length != pattern.length()) return false;
        HashMap<Character, String> mp = new HashMap<>();
        HashMap<String, Character> check = new HashMap<>();
        Vector<Pair> pp = new Vector<Pair>();
        for (int i = 0; i < list.length; i++) {
            mp.put(pattern.charAt(i), list[i]);
            check.put(list[i], pattern.charAt(i));
            pp.add(new Pair(pattern.charAt(i), list[i]));
        }
        if (mp.size() != check.size()) return false;
        for (int i = 0; i < pp.size(); i++) {
            if (!Objects.equals(mp.get(pp.get(i).getCh()), pp.get(i).getS())) return false;
        }
        return true;
    }
}
