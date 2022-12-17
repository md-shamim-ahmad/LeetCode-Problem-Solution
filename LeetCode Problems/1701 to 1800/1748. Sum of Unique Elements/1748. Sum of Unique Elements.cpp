class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> arr;
        for (auto it : nums) {
            arr[it]++;
        }
        int sum = 0;
        for (auto it : arr) {
            if (it.second == 1) {
                sum += it.first;
            }
        }
        return sum;
    }
};