class Solution {
    public List<List<Integer>> criticalConnections(int n, List<List<Integer>> connections) {
        int time = 0;
        int[] low = new int[n];
        int[] disc = new int[n];
        boolean[] visited = new boolean[n];
        List<List<Integer>> ans = new ArrayList<>();

        // 1. build adj
        List<Integer>[] adj = new ArrayList[n];
        for (int i = 0; i < n; i++) {
            adj[i] = new ArrayList<>();
        }
        for (List<Integer> node : connections) {
            adj[node.get(0)].add(node.get(1));
            adj[node.get(1)].add(node.get(0));
        }

        // 2. dfs
        dfs(0, -1, time, adj, low, disc, visited, ans);

        return ans;
    }

    private void dfs(int current, int parent, int time, List<Integer>[] adj, int[] low, int[] disc, boolean[] visited, List<List<Integer>> ans) {
        time++;
        low[current] = time;
        disc[current] = time;
        visited[current] = true;

        for (int neighbor : adj[current]) {
            if (neighbor == parent) continue;

            if (visited[neighbor] == false) {
                dfs(neighbor, current, time, adj, low, disc, visited, ans);
                low[current] = Math.min(low[current], low[neighbor]);

                // If the lowest vertex reachable from subtree
                // under neighbor is below current in DFS tree, then current-neighbor is
                // a bridge
                if (low[neighbor] > disc[current]) {
                    ans.add(Arrays.asList(current, neighbor));
                }

            } else {
                low[current] = Math.min(low[current], disc[neighbor]);
            }
        }
    }
}
