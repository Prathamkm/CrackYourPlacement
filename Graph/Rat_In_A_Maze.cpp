void dfs(vector<vector<int>> &mat, int i, int j, string s, vector<string> &v)
{
    if (i == mat.size() || j == mat[0].size() || i < 0 || j < 0 || !mat[i][j])
        return;
    if (i == mat.size() - 1 && j == mat[0].size() - 1)
        v.push_back(s);
    mat[i][j] = 0;
    dfs(mat, i + 1, j, s + 'D', v);
    dfs(mat, i - 1, j, s + 'U', v);
    dfs(mat, i, j + 1, s + 'R', v);
    dfs(mat, i, j - 1, s + 'L', v);

    mat[i][j] = 1;
}

vector<string> findPath(vector<vector<int>> &mat)
{
    // Your code goes here
    vector<string> v;
    string s = "";
    dfs(mat, 0, 0, s, v);
    return v;
}