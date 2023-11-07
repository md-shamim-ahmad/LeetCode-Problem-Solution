class Solution {
public:
    vector<string> findItinerary(vector<vector<string>> &tickets) {
        unordered_map<string, priority_queue<string, vector<string>, greater<string>>> graph;
        for (const auto &ticket: tickets) {
            graph[ticket[0]].push(ticket[1]);
        }
        vector<string> newItinerary;
        stack<string> st;
        st.push("JFK");
        while (!st.empty()) {
            string currentAirport = st.top();
            if (graph.find(currentAirport) != graph.end() && !graph[currentAirport].empty()) {
                st.push(graph[currentAirport].top());
                graph[currentAirport].pop();
            } else {
                newItinerary.push_back(st.top());
                st.pop();
            }
        }
        reverse(newItinerary.begin(), newItinerary.end());
        return newItinerary;
    }
};
