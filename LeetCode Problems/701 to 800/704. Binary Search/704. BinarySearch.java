public class Solution{
    public static int search(int[] arr, int target) {
        return find(arr, target, 0, arr.length-1);
    }

    static int find(int[] arr, int target, int start, int end){

        if (start<=end) {
            int mid = start + (end - start) / 2;

            if(target == arr[mid]){
                return mid;
            } else if(target < arr[mid]){
                return find(arr, target, start,mid-1);
            } else {
                return find(arr, target, mid+1, end);
            }

        }
        return -1;
    }
}