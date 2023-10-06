class Solution {
    private static final int R = 26;
    public int numTilePossibilities(String tiles) {
        if (tiles == null || tiles.length() == 0) return 0;

        final int[] count = new int[R];
        for (char c : tiles.toCharArray()) {
            count[c - 'A']++;
        }
        return backtrack(count);
    }
    private static int backtrack(int[] nums) {
        int sum = 0;
        for (int i = 0; i < R; i++) {
            if (nums[i] == 0) continue;
            sum++;
            nums[i]--;
            sum += backtrack(nums);
            nums[i]++;
        }
        return sum;
    }
}
