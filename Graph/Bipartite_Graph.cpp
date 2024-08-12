bool dfs(vector<int> adj[], vector<int> &color, int i, int c)
{
    color[i] = c;

    for (auto &it : adj[i])
    {
        if (c == color[it])
            return false;
        if (color[it] == -1)
            if (!dfs(adj, color, it, 1 - c))
                return false;
    }
    return true;
}
bool isBipartite(int V, vector<int> adj[])
{
    // Code here
    vector<int> color(V, -1);
    for (int i = 0; i < V; i++)
        if (color[i] == -1)
            if (!dfs(adj, color, i, 0))
                return false;
    return true;
}