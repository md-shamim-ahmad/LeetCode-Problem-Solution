class Solution {
    fun subarraysDivByK(nums: IntArray, k: Int): Int {
        var sum:Int = 0; var cnt:Int = 0; var rem:Int = 0;
        val prefix = IntArray(k);
        prefix[0]++;
        for (items in nums) {
            sum += items;
            rem = (sum % k + k)% k;
            cnt += prefix[rem];
            prefix[rem]++;
        }
        return cnt;
    }
}