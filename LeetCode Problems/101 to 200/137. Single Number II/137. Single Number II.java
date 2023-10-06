class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int ele : nums) {
            map.merge(ele, 1, Integer::sum);
        }
        int ans = -1;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() == 1) ans = entry.getKey();
        }
        return ans;
    }
}
