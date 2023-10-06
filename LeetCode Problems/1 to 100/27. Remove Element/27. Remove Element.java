class Solution {
    public int removeElement(int[] nums, int val) {
        List<Integer> list = new ArrayList<>();
        for (int ele : nums) {
            if (ele != val) list.add(ele);
        }
        int n = list.size();
        for (int i = 0; i < n; i++) nums[i] = list.get(i);
        return n;
    }
}
