class Solution:
    def removeStones(self, points):
        f = {}
        def find(x):
            if x != f.setdefault(x, x):
                f[x] = find(f[x])
            return f[x]
        for i, j in points:
            f[find(i)] = find(~j)
        return len(points) - len({find(x) for x in f})
