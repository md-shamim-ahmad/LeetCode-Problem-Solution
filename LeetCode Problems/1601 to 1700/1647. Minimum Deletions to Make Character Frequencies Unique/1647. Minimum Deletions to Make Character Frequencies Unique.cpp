class Solution {
    int search(vector<int> & arr, int l, int r, int x) {
        for (; l < r; l++) {
            if (arr[l] == x) return l;
        }
        return -1;
    }
public:
    int minDeletions(string s) {
        vector<int> arr(26);
        for (char ch : s) {
            arr[ch - 'a']++;
        }
        sort(arr.rbegin(), arr.rend());
        int cnt = 0;
        for (int i = 0; i < 26; i++) {
            while(search(arr, 0, i, arr[i]) != -1 || search(arr, i + 1, 26, arr[i]) != -1) {
                if(arr[i] - 1 < 0) break;
                arr[i] -= 1;
                cnt++;
            }
        }
        return cnt;
    }
};