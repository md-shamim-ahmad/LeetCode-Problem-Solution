class Solution {
public:
    int maximumBags(vector<int> &capacity, vector<int> &rocks, int additionalRocks) {
        map<int, int> mp;
        for (int i = 0; i < capacity.size(); i++) {
            mp[capacity[i] - rocks[i]]++;
        }
        int cnt = 0;
        for (auto it: mp) {
            cout << it.first << " " << it.second << '\n';
            if (it.first == 0) {
                cnt += it.second;
            } else {
                if (it.first * it.second < additionalRocks) {
                    cnt += it.second;
                    additionalRocks -= it.first * it.second;
                } else {
                    cnt += additionalRocks / it.first;
                    break;
                }
            }
        }
        cout << additionalRocks << '\n';
        return cnt;
    }
};