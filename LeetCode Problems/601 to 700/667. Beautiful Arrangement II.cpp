class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans(n);
        for (int i = 0, a = 1, z = k + 1; i <= k; i++)
            ans[i] = i % 2 ? z-- : a++;
        for (int i = k+1; i < n; i++)
            ans[i] = i + 1;
        return ans;
    }
};
