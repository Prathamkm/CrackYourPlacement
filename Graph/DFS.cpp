void dfs(vector<int> adj[], vector<int> &vis, vector<int> &ans, int i)
{
    if (vis[i])
        return;
    vis[i] = 1;
    ans.push_back(i);
    for (int j = 0; j < adj[i].size(); j++)
    {
        dfs(adj, vis, ans, adj[i][j]);
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> ans;
    vector<int> vis(V + 1, 0);
    dfs(adj, vis, ans, 0);
    return ans;
}