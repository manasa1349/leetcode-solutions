class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;

        unordered_map<int, vector<int>> graph;
        for (int i = 0; i < n; ++i) {
            graph[arr[i]].push_back(i);
        }

        queue<int> q;
        vector<bool> visited(n, false);
        q.push(0);
        visited[0] = true;
        int steps = 0;
        while (!q.empty()) {
            int size = q.size();
            
            while (size--) {
                int idx = q.front();
                q.pop();

                if (idx == n - 1) return steps;

                // Move 1: Jump to matching values
                if (graph.count(arr[idx])) {
                    for (int neighbor : graph[arr[idx]]) {
                        if (!visited[neighbor]) {
                            visited[neighbor] = true;
                            q.push(neighbor);
                        }
                    }
                    graph.erase(arr[idx]); 
                }

                // Move 2: Jump backward (i - 1)
                if (idx - 1 >= 0 && !visited[idx - 1]) {
                    visited[idx - 1] = true;
                    q.push(idx - 1);
                }

                // Move 3: Jump forward (i + 1)
                if (idx + 1 < n && !visited[idx + 1]) {
                    visited[idx + 1] = true;
                    q.push(idx + 1);
                }
            }
            steps++;
        }
        return 0;
    }
};
