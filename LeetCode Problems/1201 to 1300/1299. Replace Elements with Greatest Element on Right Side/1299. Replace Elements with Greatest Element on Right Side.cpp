class Solution {
public:
    vector<int> replaceElements(vector<int> &arr) {
        int val = -1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = val;
            val = max(arr[i], temp);
        }
        return arr;
    }
};
