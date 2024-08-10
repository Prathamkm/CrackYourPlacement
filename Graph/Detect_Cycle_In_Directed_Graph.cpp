bool dfs(vector<int> adj[], vector<bool> &v, vector<bool> &r, int i)
{
    v[i] = 1;
    r[i] = 1;
    for (auto it : adj[i])
    {
        if (!v[it] && dfs(adj, v, r, it))
            return true;
        else if (r[it])
            return true;
    }
    r[i] = 0;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    // code here
    vector<bool> v(V + 1, 0);
    vector<bool> r(V + 1, 0);
    for (int i = 0; i < V; i++)
    {
        if (!v[i] && dfs(adj, v, r, i))
            return true;
    }

    return false;
}