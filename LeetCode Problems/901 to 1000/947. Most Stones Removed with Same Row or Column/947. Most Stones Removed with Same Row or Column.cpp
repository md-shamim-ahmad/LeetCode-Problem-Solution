class Solution {
    unordered_map<int, int> f;
    int res = 0;

public:
    int removeStones(vector<vector<int>> &stones) {
        for (int i = 0; i < stones.size(); i++)
            Union(stones[i][0], ~stones[i][1]);
        return stones.size() - res;
    }
    int find(int x) {
        if (!f.count(x))
            f[x] = x, res++;
        if (x != f[x])
            f[x] = find(f[x]);
        return f[x];
    }
    void Union(int x, int y) {
        x = find(x), y = find(y);
        if (x != y)
            f[x] = y, res--;
    }
};
