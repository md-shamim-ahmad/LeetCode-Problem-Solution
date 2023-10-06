class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int num[] = new int[m + n];
        int k = 0, i = 0, j = 0;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j])
                num[k++] = nums1[i++];
            else
                num[k++] = nums2[j++];
        }
        while (i < m) num[k++] = nums1[i++];
        while (j < n) num[k++] = nums2[j++];
        for (i = 0; i < n + m; i++) nums1[i] = num[i];
    }
}
