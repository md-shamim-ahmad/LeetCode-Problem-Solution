class Solution {
    private List<List<Integer>> list = new ArrayList<List<Integer>>();
    private List<Integer> combination = new ArrayList<>();

    public List<List<Integer>> combine(int n, int k) {
        generator(n, k, 1);
        return list;
    }
    void generator(int n, int k, int s) {
        if (combination.size() == k) {
            list.add(new ArrayList<>(combination));
            return;
        }
        if (s > n) return;
        for (int i = s; i <= n; i++) {
            combination.add(i);
            generator(n, k, i + 1);
            combination.remove(combination.size() - 1);
        }
    }
}
