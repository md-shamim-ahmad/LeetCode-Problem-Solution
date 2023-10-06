class Solution {
    public int removeDuplicates(int[] nums) {
        List<Integer> list = new ArrayList<>();
        for (int i = 1; i < nums.length; i++)
            if (nums[i] != nums[i - 1]) list.add(nums[i - 1]);
        list.add(nums[nums.length - 1]);
        int n = list.size();
        for (int i = 0; i < n; i++) nums[i] = list.get(i);
        return n;
    }
}
