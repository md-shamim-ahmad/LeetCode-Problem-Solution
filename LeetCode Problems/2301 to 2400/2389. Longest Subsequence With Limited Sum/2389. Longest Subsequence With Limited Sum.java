class Solution {
    private static int upper_bound(int arr[], int x) {
        int l = -1, r = arr.length;
        while (l + 1 < r) {
            int m = (l + r) >>> 1;
            if (arr[m] <= x)
                l = m;
            else
                r = m;
        }
        return l + 1;
    }
    public int[] answerQueries(int[] nums, int[] queries) {
        Arrays.sort(nums);
        for (int i = 1; i < nums.length; i++) nums[i] += nums[i - 1];
        int ans[] = new int[queries.length];
        for (int i = 0; i < queries.length; i++) {
            ans[i] = upper_bound(nums, queries[i]);
        }
        return ans;
    }
}
