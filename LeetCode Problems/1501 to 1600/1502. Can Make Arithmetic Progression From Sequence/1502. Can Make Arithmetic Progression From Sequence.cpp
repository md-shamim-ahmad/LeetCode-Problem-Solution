class Solution {
public:
    bool canMakeArithmeticProgression(vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int temp = arr[1] - arr[0];
        for (int i = 1; i < arr.size() - 1; i++) {
            if (arr[i + 1] - arr[i] != temp)
                return false;
        }
        return true;
    }
};