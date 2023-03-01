class Solution {
public:
    void merge(int l, int m, int r, vector<int> &a) {
        int i = l, j = m+1;
        vector<int> temp;
        while(i <= m && j <= r) {
            if (a[i] < a[j]) {
                temp.push_back(a[i++]);
            }
            else {
                temp.push_back(a[j++]);
            }
        }
        while(i <= m)
            temp.push_back(a[i++]);
        while(j <= r)
            temp.push_back(a[j++]);
        j = temp.size() - 1;
        for (int k = r; k >= l; k--) {
            a[k] = temp[j--];
        }
    }
    void split(int l, int r, vector<int> &a) {
        if(l < r) {
            int m = (l + r) / 2;
            split(l, m, a);        
            split(m + 1, r, a);
            merge(l, m, r, a);
        } else return;
    }
    vector<int> sortArray(vector<int>& nums) {
        split(0, nums.size()-1, nums);
        return nums;
    }
};