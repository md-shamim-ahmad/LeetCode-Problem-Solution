class Solution {
public:
    bool uniqueOccurrences(vector<int> &arr) {
        map<int, int> mp;
        for (auto it: arr)
            mp[it]++;
        arr.clear();
        for (auto it: mp)
            arr.push_back(it.second);
        mp.clear();
        for (auto it: arr) {
            if (mp[it] == 1)
                return false;
            mp[it] = 1;
        }
        return true;
    }
};