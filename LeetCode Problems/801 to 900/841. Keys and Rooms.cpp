class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        queue<int> query;
        query.push(0);
        while(!query.empty()) {
            int val = query.front();
            query.pop();
            visited[val] = true;
            for(int i = 0; i < rooms[val].size(); i++) {
                if(!visited[rooms[val][i]]) {
                    query.push(rooms[val][i]);
                }
            }
        }
        for (auto it : visited) {
            if (!it) {
                return false;
            }
        }
        return true;
    }
};