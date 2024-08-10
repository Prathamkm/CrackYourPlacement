void bfs(vector<int> adj[], vector<int> &v, vector<int> &ans, int i)
{
    queue<int> q;
    q.push(i);
    v[i] = 1;
    ans.push_back(i);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto &it : adj[u])
        {
            if (!v[it])
            {
                q.push(it);
                v[it] = 1;
                ans.push_back(it);
            }
        }
    }
}

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<int> v(V + 1, 0);
    vector<int> ans;
    bfs(adj, v, ans, 0);
    return ans;
}