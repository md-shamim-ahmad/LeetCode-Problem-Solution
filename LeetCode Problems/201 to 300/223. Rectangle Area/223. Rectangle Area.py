class Solution:
    def computeArea(self, ax1: int, ay1: int, ax2: int, ay2: int, bx1: int, by1: int, bx2: int, by2: int) -> int:
        areaA = abs(ax1-ax2) * abs(ay1 - ay2)
        areaB = abs(bx1-bx2) * abs(by1 - by2)
        
        overlapX = min(bx2, ax2) - max(ax1, bx1)
        overlapX = max(overlapX, 0)
        
        overlapY = min(by2, ay2) - max(ay1, by1)
        overlapY = max(overlapY, 0)
        
        return areaA + areaB - (overlapX * overlapY)    
