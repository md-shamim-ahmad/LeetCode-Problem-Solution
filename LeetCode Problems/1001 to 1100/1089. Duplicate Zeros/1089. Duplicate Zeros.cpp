class Solution {
public:
    void duplicateZeros(vector<int> &arr) {
        int n = arr.size(), num = 0, cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (!arr[i]) {
                for (int j = n - 1; j > i + 1; j--)
                    arr[j] = arr[j - 1];
                arr[i + 1] = arr[i];
                i++;
            }
        }
    }
};
