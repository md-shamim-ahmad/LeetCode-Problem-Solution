class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2,
                    int by2) {
        int areaA = abs(ax1 - ax2) * abs(ay1 - ay2);
        int areaB = abs(bx1 - bx2) * abs(by1 - by2);

        int overlapX = min(ax2, bx2) - max(ax1, bx1);
        overlapX = overlapX > 0 ? overlapX : 0;

        int overlapY = min(ay2, by2) - max(ay1, by1);
        overlapY = overlapY > 0 ? overlapY : 0;

        return areaA + areaB - (overlapX * overlapY);
    }
};
