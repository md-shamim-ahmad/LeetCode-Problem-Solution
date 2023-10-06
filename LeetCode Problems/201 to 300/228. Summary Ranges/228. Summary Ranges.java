class Solution {
    private List<String> ans;
    public List<String> summaryRanges(int[] nums) {
        ans = new ArrayList<>();
        if (nums.length == 0) return ans;
        long curr = nums[0], prev = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] - prev == 1) {
                prev = nums[i];
                continue;
            }
            insert(curr, prev);
            curr = prev = nums[i];
        }
        insert(curr, prev);
        return ans;
    }
    private void insert(long curr, long prev) {
        if (curr == prev)
            ans.add(String.valueOf(curr));
        else
            ans.add(String.valueOf(curr) + "->" + String.valueOf(prev));
    }
}
