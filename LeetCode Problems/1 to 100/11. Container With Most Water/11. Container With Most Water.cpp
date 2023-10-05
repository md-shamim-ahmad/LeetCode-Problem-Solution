class Solution {
public:
    int maxArea(vector<int> &height) {
        int l = 0, r = height.size() - 1;
        int ans = INT_MIN;
        while (l < r) {
            int left = height[l], right = height[r];
            ans = max(ans, min(left, right) * abs(l - r));
            if (height[l] < height[r]) {
                while (l < r && height[l] <= left)
                    l++;
            } else {
                while (l < r && height[r] <= right)
                    r--;
            }
        }
        return ans;
    }
};
