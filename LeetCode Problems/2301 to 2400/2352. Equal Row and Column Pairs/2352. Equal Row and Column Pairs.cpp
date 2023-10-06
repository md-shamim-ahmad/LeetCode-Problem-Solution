class Solution {
public:
    int equalPairs(vector<vector<int>> &grid) {
        vector<string> arr, a;
        for (int i = 0; i < grid.size(); i++) {
            string s = "";
            for (int j = 0; j < grid.size(); j++) {
                s += to_string(grid[i][j]) + " ";
            }
            arr.push_back(s);
            s = "";
            for (int j = 0; j < grid.size(); j++) {
                s += to_string(grid[j][i]) + " ";
            }
            a.push_back(s);
        }
        int cnt = 0;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < a.size(); j++) {
                if (arr[i] == a[j])
                    cnt++;
            }
        }
        return cnt;
    }
};