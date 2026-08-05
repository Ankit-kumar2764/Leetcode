class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
        vis[node] = 1;
        for (int nei : adj[node]) {
            if (!vis[nei])
                dfs(nei, adj, vis);
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);

        for (auto &e : invocations)
            adj[e[0]].push_back(e[1]);

        // Step 1: Mark suspicious methods
        vector<int> suspicious(n, 0);
        dfs(k, adj, suspicious);

        // Step 2: Check if removal is possible
        for (auto &e : invocations) {
            int u = e[0], v = e[1];

            if (!suspicious[u] && suspicious[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        // Step 3: Return remaining methods
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!suspicious[i])
                ans.push_back(i);
        }

        return ans;
    }
};