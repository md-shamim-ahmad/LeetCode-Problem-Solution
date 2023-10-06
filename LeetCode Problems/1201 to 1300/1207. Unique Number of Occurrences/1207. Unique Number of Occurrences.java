class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        for (int i = 0; i < arr.length; i++) mp.put(arr[i], 0);
        for (int i = 0; i < arr.length; i++) mp.put(arr[i], (mp.get(arr[i]) + 1));
        HashMap<Integer, Integer> track = new HashMap<>();
        for (Integer it : mp.keySet()) {
            if (track.get(mp.get(it)) == null || track.get(mp.get(it)) == 0) {
                track.put(mp.get(it), (mp.get(it) + 1));
                continue;
            }
            if (track.get(mp.get(it)) > 1) return false;
        }
        return true;
    }
}
