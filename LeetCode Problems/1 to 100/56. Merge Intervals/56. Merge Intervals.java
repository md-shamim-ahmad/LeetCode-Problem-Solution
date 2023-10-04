import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

class Solution {
    public int[][] merge(int[][] intervals) {
        int n = intervals.length;
        Arrays.sort(intervals, Comparator.comparingInt(i -> i[0]));
        List<int[]> list = new ArrayList<>();
        if (n == 1) {
            return intervals;
        }
        int[] interval = intervals[0];
        list.add(interval);
        for (int[] interv : intervals) {
            if (interv[0] <= interval[1]) {
                interval[1] = Math.max(interval[1], interv[1]);

            } else {
                interval = interv;
                list.add(interval);
            }
        }
        return list.toArray(new int[list.size()][]);

    }
}
