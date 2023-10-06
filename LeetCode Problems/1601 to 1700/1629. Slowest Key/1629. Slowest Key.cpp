bool SortBaseOnFirstElement(const pair<char, int> &a, const pair<char, int> &b) {
    return a.first < b.first;
}

bool SortBaseOnSecondElement(const pair<char, int> &a, const pair<char, int> &b) {
    return a.second < b.second;
}
class Solution {
public:
    char slowestKey(vector<int> &releaseTimes, string keysPressed) {
        int n = keysPressed.size();
        vector<pair<char, int>> arr;
        arr.emplace_back(keysPressed[0], releaseTimes[0]);
        for (int i = 1; i < n; i++) {
            arr.emplace_back(keysPressed[i], releaseTimes[i] - releaseTimes[i - 1]);
        }
        sort(arr.begin(), arr.end(), SortBaseOnFirstElement);
        sort(arr.begin(), arr.end(), SortBaseOnSecondElement);
        return arr[n - 1].first;
    }
};