class Solution {
public:
    int pivotInteger(int n) {
        vector<int> sum_l(n), sum_r(n);
        sum_l[0] = 1, sum_r[n - 1] = n;
        for (int i = 1; i < n; i++)
            sum_l[i] = sum_l[i - 1] + (i + 1);
        for (int i = n - 2; i >= 0; i--)
            sum_r[i] = sum_r[i + 1] + (i + 1);
        for (int i = 0; i < n; i++)
            if (sum_l[i] == sum_r[i])
                return i + 1;
        return -1;
    }
};
