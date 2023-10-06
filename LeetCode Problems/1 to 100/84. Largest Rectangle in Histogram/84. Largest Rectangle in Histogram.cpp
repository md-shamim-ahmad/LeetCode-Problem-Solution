class Solution {
public:
    vector<int> nextsmallerelement(vector<int> &arr, int n) {
        stack<int> s;
        vector<int> ans(n);
        s.push(-1);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevsmallerelement(vector<int> &arr, int n) {
        stack<int> s;
        vector<int> ans(n);
        s.push(-1);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int> &heights) {
        int n = heights.size();
        vector<int> next(n);
        vector<int> prev(n);
        next = nextsmallerelement(heights, n);
        prev = prevsmallerelement(heights, n);
        int maxarea = INT_MIN;
        for (int i = 0; i < n; i++) {
            int l = heights[i];

            if (next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;

            int area = l * b;
            maxarea = max(maxarea, area);
        }
        return maxarea;
    }
};
