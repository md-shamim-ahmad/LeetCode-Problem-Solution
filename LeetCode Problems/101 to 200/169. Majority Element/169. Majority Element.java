class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int ele : nums) map.merge(ele, 1, Integer::sum);
        int element = 0, value = Integer.MIN_VALUE;
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (value < entry.getValue()) {
                element = entry.getKey();
                value = entry.getValue();
            }
        }
        return element;
    }
}
