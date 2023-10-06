class Solution {
    public int minimumRounds(int[] tasks) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int i = 0; i < tasks.length; i++) {
            if (mp.get(tasks[i]) == null)
                mp.put(tasks[i], 1);
            else
                mp.put(tasks[i], mp.get(tasks[i]) + 1);
        }
        int cnt = 0;
        for (Map.Entry<Integer, Integer> item : mp.entrySet()) {
            int value = item.getValue();
            if (value <= 1) return -1;
            cnt += value % 3 == 0 ? value / 3 : (value / 3) + 1;
        }
        return cnt;
    }
}
