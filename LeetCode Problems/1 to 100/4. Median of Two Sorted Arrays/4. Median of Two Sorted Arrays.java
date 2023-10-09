class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int index1 = (m + n) / 2;
        int index2 = -1;
        double currentNumber = -1, prevNumber = -1;
        if ((m + n) % 2 == 0) {
            index2 = index1 - 1;
        }
        int i = 0, j = 0, k = 0;
        while (i < m || j < n) {
            prevNumber = currentNumber;
            if ((i < m && j < n && nums1[i] <= nums2[j]) || (i < m && j >= n)) {
                currentNumber = nums1[i];
                i++;
            } else if ((i < m && j < n && nums1[i] > nums2[j]) || (i >= m && j < n)) {
                currentNumber = nums2[j];
                j++;
            }

            if (k == index1) {
                break;
            }
            k++;
        }
        if (index2 != -1)
            return (currentNumber + prevNumber) / 2;

        return currentNumber;
    }
}
