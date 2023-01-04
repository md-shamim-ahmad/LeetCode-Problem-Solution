class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
         map<int, int> mp;
        for(int i = 0; i < tasks.size(); i++) {
            mp[tasks[i]]++;
        }
        int cnt = 0;
        for(auto it : mp) {
            if(it.second <= 1)
                return -1;
            cnt += it.second % 3 == 0 ? it.second / 3 : (it.second / 3) + 1;
        }
        return cnt;
    }
};