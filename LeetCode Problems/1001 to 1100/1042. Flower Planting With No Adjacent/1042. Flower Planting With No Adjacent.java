class Solution {
    public int[] gardenNoAdj(int N, int[][] paths) {
        List<List<Integer>> graph = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            graph.add(new ArrayList<>());
        }
        for (int[] path : paths) {
            graph.get(path[0] - 1).add(path[1] - 1);
            graph.get(path[1] - 1).add(path[0] - 1);
        }

        int[] ans = new int[N];
        for (int i = 0; i < graph.size(); i++) {
            boolean[] colors = new boolean[5];
            for (int neigh : graph.get(i)) {
                colors[ans[neigh]] = true;
            }
            for (int color = 1; color <= 4; color++) {
                if (!colors[color]) {
                    ans[i] = color;
                    break;
                }
            }
        }
        return ans;
    }
}
