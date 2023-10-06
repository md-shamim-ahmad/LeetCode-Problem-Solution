class Solution {
    public List<String> letterCombinations(String digits) {
        int n = digits.length();
        if (n == 0) return new ArrayList<String>();
        List<String> list = new ArrayList<>(List.of("abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"));
        List<String> ans = new ArrayList<>();
        if (n == 1) {
            String s = list.get((digits.charAt(0) - '0') - 2);
            for (int i = 0; i < s.length(); i++) {
                ans.add((s.charAt(i) + ""));
            }
        } else if (n == 2) {
            String s1 = list.get((digits.charAt(0) - '0') - 2);
            String s2 = list.get((digits.charAt(1) - '0') - 2);
            for (int i = 0; i < s1.length(); i++) {
                for (int j = 0; j < s2.length(); j++) {
                    String word = "";
                    word += s1.charAt(i);
                    word += s2.charAt(j);
                    ans.add(word);
                }
            }
        } else if (n == 3) {
            String s1 = list.get((digits.charAt(0) - '0') - 2);
            String s2 = list.get((digits.charAt(1) - '0') - 2);
            String s3 = list.get((digits.charAt(2) - '0') - 2);
            for (int i = 0; i < s1.length(); i++) {
                for (int j = 0; j < s2.length(); j++) {
                    for (int k = 0; k < s3.length(); k++) {
                        String word = "";
                        word += s1.charAt(i);
                        word += s2.charAt(j);
                        word += s3.charAt(k);
                        ans.add(word);
                    }
                }
            }
        } else if (n == 4) {
            String s1 = list.get((digits.charAt(0) - '0') - 2);
            String s2 = list.get((digits.charAt(1) - '0') - 2);
            String s3 = list.get((digits.charAt(2) - '0') - 2);
            String s4 = list.get((digits.charAt(3) - '0') - 2);
            for (int i = 0; i < s1.length(); i++) {
                for (int j = 0; j < s2.length(); j++) {
                    for (int k = 0; k < s3.length(); k++) {
                        for (int l = 0; l < s4.length(); l++) {
                            String word = "";
                            word += s1.charAt(i);
                            word += s2.charAt(j);
                            word += s3.charAt(k);
                            word += s4.charAt(l);
                            ans.add(word);
                        }
                    }
                }
            }
        }
        return ans;
    }
}
