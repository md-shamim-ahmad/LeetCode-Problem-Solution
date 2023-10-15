class NumArray {
    int size;
    vector<int> values;

public:
    void build(vector<int> &nums, int x, int lx, int rx) {
        if (rx - lx == 1) {
            if (lx < (int) nums.size())
                values[x] = nums[lx];
            return;
        }
        int m = (lx + rx) / 2;
        build(nums, 2 * x + 1, lx, m);
        build(nums, 2 * x + 2, m, rx);
        values[x] = values[2 * x + 1] + values[2 * x + 2];
    }
    NumArray(vector<int> &nums) {
        size = 1;
        while (size < nums.size())
            size *= 2;
        values.assign(2 * size, 0);
        build(nums, 0, 0, size);
    }

    void update(int i, int val, int x, int lx, int rx) {
        if (rx - lx == 1) {
            values[x] = val;
            return;
        }
        int m = (lx + rx) / 2;
        if (i < m)
            update(i, val, 2 * x + 1, lx, m);
        else
            update(i, val, 2 * x + 2, m, rx);
        values[x] = values[2 * x + 1] + values[2 * x + 2];
    }

    void update(int i, int val) {
        update(i, val, 0, 0, size);
    }
    int sumRange(int i, int j, int x, int lx, int rx) {
        if (lx >= j || i >= rx)
            return 0;
        if (lx >= i && rx <= j)
            return values[x];
        int m = (lx + rx) / 2;
        int left = sumRange(i, j, 2 * x + 1, lx, m);
        int right = sumRange(i, j, 2 * x + 2, m, rx);
        return left + right;
    }
    int sumRange(int i, int j) {
        return sumRange(i, j + 1, 0, 0, size);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
