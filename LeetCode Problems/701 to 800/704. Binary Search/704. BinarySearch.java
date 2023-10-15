public class Solution {
    public static int search(int[] arr, int target) {
        return findRequiredElement(arr, target, 0, arr.length - 1);
    }

    static int findRequiredElement(int[] arr, int target, int start, int end) {
        if (start <= end) {
            int mid = start + (end - start) / 2;
            if (target == arr[mid]) {
                return mid;
            } else if (target < arr[mid]) {
                return findRequiredElement(arr, target, start, mid - 1);
            } else {
                return findRequiredElement(arr, target, mid + 1, end);
            }
        }
        return -1;
    }
}
