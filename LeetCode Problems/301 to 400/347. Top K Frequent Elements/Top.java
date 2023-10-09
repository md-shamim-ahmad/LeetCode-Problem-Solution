import java.util.Arrays;
import java.util.Map;
import java.util.PriorityQueue;

class Solution {
    class Pair implements Comparable<Pair> {
        int num, count;

        Pair(int num, int count) {
            this.num = num;
            this.count = count;
        }

        @Override
        public int compareTo(Pair o) {
            return this.count - o.count;
        }

    }

    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        PriorityQueue<Pair> pq = new PriorityQueue<>();
        Set<Integer> keys = map.keySet();
        for (int key : keys) {
            if (pq.size() < k) {
                pq.add(new Pair(key, map.get(key)));
            } else if (pq.peek().count < map.get(key)) {
                pq.poll();
                pq.add(new Pair(key, map.get(key)));
            }
        }
        int[] newArr = new int[k];
        int i = k - 1;
        while (i >= 0) {
            newArr[i] = pq.poll().num;
            i--;
        }
        return newArr;

    }
}
