class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>> &rectangles) {
        map<double, long long> ratio;//(rectangles.size());
        for (int i = 0; i < rectangles.size(); i++) {
            double cal = (double) rectangles[i][0] / rectangles[i][1];
            ratio[cal]++;
        }
        long long cnt = 0;
        for (auto it: ratio) {
            if (it.second > 1) {
                cnt += ((1 + (it.second - 1)) * (it.second - 1)) / 2;
            }
        }
        return cnt;
    }
};