class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> bfs;
        queue<int> q;
        vector<int> visited(n,0);
        visited[0] = true;
        q.push(0);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            bfs.push_back(u);
            for(int v:adj[u]){
                if(visited[v]==0){
                    visited[v]=1;
                    q.push(v);
                }
            }
        }
        return bfs;
    }
};