public class Solution{
    public static int search(int[] arr, int target) {
        return find(arr, target, 0, arr.length-1);
    }

    static int find(int[] arr, int target, int s, int e){

        if (s<=e) {
            int mid = s + (e - s) / 2;

            if(target == arr[mid]){
                return mid;
            } else if(target < arr[mid]){
                return find(arr, target, s,mid-1);
            } else {
                return find(arr, target, mid+1, e);
            }

        }
        return -1;
    }
}