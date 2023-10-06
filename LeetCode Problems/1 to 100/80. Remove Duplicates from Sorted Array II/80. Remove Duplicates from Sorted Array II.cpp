class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        map<int, int> mp;
        for (auto it: nums)
            mp[it]++;
        int sum = 0;
        nums.clear();
        for (auto it: mp) {
            sum += min(2, it.second);
            for (int i = 0; i < min(2, it.second); i++) {
                nums.push_back(it.first);
            }
        }
        return sum;
    }
};