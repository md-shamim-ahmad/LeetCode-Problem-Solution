class Solution {
    public List<Integer> partitionLabels(String s) {
        int[] map = new int[27];
        for (int i = 0; i < s.length(); i++) {
            map[s.charAt(i) - 'a'] = i + 1;
        }
        int size = 0, r = 0;
        List<Integer> arr = new ArrayList<>();
        for (int l = 0; l < s.length(); l++) {
            if (l == r && l != 0) {
                arr.add(size);
                size = 0;
            }
            if (l <= r) {
                r = Math.max(r, map[s.charAt(l) - 'a']);
                size++;
            }
        }
        arr.add(size);
        return arr;
    }
}
