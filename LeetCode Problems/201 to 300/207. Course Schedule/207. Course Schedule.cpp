class Solution {
public:
    bool DFS(int node, vector<vector<int>> &edges, vector<bool> &completed, vector<bool> &visited) {
        if (visited[node] && !completed[node]) {
            return false;
        }

        visited[node] = true;
        for (int i = 0; i < edges[node].size(); i++) {
            if (!completed[edges[node][i]]) {
                bool b = DFS(edges[node][i], edges, completed, visited);
                if (!b)
                    return false;
            }
        }

        completed[node] = true;
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
        vector<vector<int>> edges(numCourses);
        vector<bool> completed(numCourses, false);
        vector<bool> visited(numCourses, false);

        for (int i = 0; i < prerequisites.size(); i++) {
            int ai = prerequisites[i][0], bi = prerequisites[i][1];
            edges[ai].push_back(bi);
        }

        for (int i = 0; i < numCourses; i++) {
            if (!completed[i]) {
                bool b = DFS(i, edges, completed, visited);
                if (!b)
                    return false;
            }
        }

        return true;
    }
};
