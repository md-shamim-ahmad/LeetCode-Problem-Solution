class Solution {
    class Pair {
        int first, second;
        Pair(int a, int b) {
            first = a;
            second = b;
        }
    }
    public int[] twoSum(int[] nums, int target) {
        ArrayList<Pair> arr = new ArrayList<>();
        for (int i = 0; i < nums.length; i++) arr.add(new Pair(nums[i], i));

        Collections.sort(arr, Comparator.comparing(p -> p.first));
        int l = 0, r = nums.length - 1;
        while (l <= r) {
            int sum = arr.get(l).first + arr.get(r).first;
            if (sum == target) {
                return new int[] {arr.get(l).second, arr.get(r).second};
            } else if (sum < target)
                l++;
            else
                r--;
        }
        return new int[] {-1, -1};
    }
}
