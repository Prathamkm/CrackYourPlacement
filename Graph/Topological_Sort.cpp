void dfs(vector<int> adj[], vector<bool> &v, stack<int> &s, int i)
{
    if (v[i])
        return;
    v[i] = 1;
    for (auto &it : adj[i])
    {
        if (!v[it])
            dfs(adj, v, s, it);
    }
    s.push(i);
}

vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    stack<int> s;
    vector<bool> v(V);
    vector<int> ans;
    for (int i = 0; i < V; i++)
        if (!v[i])
            dfs(adj, v, s, i);
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}