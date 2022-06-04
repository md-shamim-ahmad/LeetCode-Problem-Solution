class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int current_maximum = arr[0];
        int maximum_so_far = arr[0]; 

        for (int i = 1; i < arr.size(); i++) { 
            current_maximum = max(arr[i], current_maximum+arr[i]); 
            maximum_so_far = max(maximum_so_far, current_maximum); 
       } 
        return maximum_so_far;
    }
};