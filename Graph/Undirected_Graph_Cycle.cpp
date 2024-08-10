bool dfs(vector<int> adj[], vector<bool> &v, int i, int p)
{
    v[i] = 1;

    for (auto &it : adj[i])
    {
        if (it == p)
            continue;
        if (v[it])
            return true;
        if (dfs(adj, v, it, i))
            return true;
    }
    return false;
}
// Function to detect cycle in an undirected graph.
bool isCycle(int V, vector<int> adj[])
{
    // Code here
    vector<bool> v(V, 0);
    for (int i = 0; i < V; i++)
    {
        if (!v[i] && dfs(adj, v, i, -1))
            return true;
    }
    return false;
}