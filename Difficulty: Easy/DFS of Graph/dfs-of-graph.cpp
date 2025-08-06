class Solution {
  public:
    void traversal(vector<vector<int>>& adj,vector<int> &ans,vector<int> &visited,int node){
        visited[node] = 1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!visited[it]){
                traversal(adj,ans,visited,it);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<int> ans;
        int n = adj.size();
        int node = 0;
        vector<int> visited(n,0);
        traversal(adj,ans,visited,node);
        return ans;
    }
};