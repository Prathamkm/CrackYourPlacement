void dfs(vector<vector<char>> &grid, vector<vector<bool>> &v, int i, int j)
{
    if (i == grid.size() || j == grid[0].size() || i < 0 || j < 0 || grid[i][j] == '0' || v[i][j])
        return;
    v[i][j] = 1;
    dfs(grid, v, i + 1, j);
    dfs(grid, v, i - 1, j);
    dfs(grid, v, i, j + 1);
    dfs(grid, v, i, j - 1);
}

int numIslands(vector<vector<char>> &grid)
{
    if (grid.size() == 1 && grid[0].size() == 1 && grid[0][0] == '0')
        return 0;
    int count = 0;
    vector<vector<bool>> v(grid.size(), vector<bool>(grid[0].size(), 0));
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
            if (!v[i][j] && grid[i][j] == '1')
            {
                dfs(grid, v, i, j);
                count++;
            }
    }
    return count;
}