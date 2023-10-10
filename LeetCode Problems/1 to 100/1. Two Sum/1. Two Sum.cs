public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        if (nums == null || nums.Length == 0) throw new ArgumentException("Invalid array provided");

        Dictionary<int, int> set = new Dictionary<int, int>();

        for (int i = 0; i < nums.Length; i++) {
            int compliment = target - nums[i];
            if (set.ContainsKey(compliment)) {
                return new[] { set[compliment], i };
            } else {
                if (!set.ContainsKey(nums[i])) { // To avoid duplicates
                    set.Add(nums[i], i);
                }
            }
        }

        return new int[] {};
    }
}
