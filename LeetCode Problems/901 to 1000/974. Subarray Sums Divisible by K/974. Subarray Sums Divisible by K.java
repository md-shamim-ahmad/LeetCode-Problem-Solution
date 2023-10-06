class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        int sum = 0, cnt = 0, rem;
        int[] prefix = new int[k];
        prefix[0]++;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            rem = (sum % k + k) % k;
            cnt += prefix[rem];
            prefix[rem]++;
        }
        return cnt;
    }
}
