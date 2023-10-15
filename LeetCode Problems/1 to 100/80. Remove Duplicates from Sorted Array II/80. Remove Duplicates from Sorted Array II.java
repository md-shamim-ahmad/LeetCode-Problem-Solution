class Solution {
    public int removeDuplicates(int[] nums) {
        Map<Integer, Integer> map = new LinkedHashMap<>();
        for (int ele : nums) {
            map.merge(ele, 1, Integer::sum);
        }
        int k = 0;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            for (int i = 0; i < Math.min(2, entry.getValue()); i++) {
                nums[k++] = entry.getKey();
            }
        }
        return k;
    }
}
