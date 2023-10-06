class Solution {
    public int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int areaA = Math.abs(ax1 - ax2) * Math.abs(ay1 - ay2);
        int areaB = Math.abs(bx1 - bx2) * Math.abs(by1 - by2);

        int overlapX = Math.min(ax2, bx2) - Math.max(ax1, bx1);
        overlapX = overlapX > 0 ? overlapX : 0;

        int overlapY = Math.min(ay2, by2) - Math.max(ay1, by1);
        overlapY = overlapY > 0 ? overlapY : 0;

        return areaA + areaB - (overlapX * overlapY);
    }
}
