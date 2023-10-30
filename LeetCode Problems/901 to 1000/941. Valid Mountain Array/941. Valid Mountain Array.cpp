class Solution {
public:
    bool validMountainArray(vector<int> &arr) {
        bool check = false;
        int i = 0, cntA = 0, cntB = 0;
        for (i = 0; i < arr.size() - 1; i++) {
            if (arr[i] < arr[i + 1])
                cntA++;
            else
                break;
        }
        for (; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1])
                cntB++;
            else
                break;
        }
        if (cntA != 0 && cntB != 0 && (cntA + cntB) == arr.size() - 1)
            return true;
        else
            return false;
    }
};