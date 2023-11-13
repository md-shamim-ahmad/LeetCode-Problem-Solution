class Solution {
    public int countSubarrays(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        int n = nums.length, ind = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == k) {
                ind = i;
                break;
            }
        }
        int diff = 0;
        for (int i = ind; i >= 0; i--) {
            if (nums[i] < k)
                diff--;
            else if (nums[i] > k)
                diff++;
            map.put(diff, map.getOrDefault(diff, 0) + 1);
        }
        int count = map.getOrDefault(0, 0) + map.getOrDefault(1, 0);
        int currdiff = 0;
        for (int i = ind + 1; i < n; i++) {
            if (nums[i] < k)
                currdiff--;
            else
                currdiff++;
            count += map.getOrDefault(-currdiff, 0);
            count += map.getOrDefault(1 - (currdiff), 0);
        }
        return count;
    }
}
