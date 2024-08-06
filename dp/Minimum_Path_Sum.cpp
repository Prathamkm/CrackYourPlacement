class Solution
{
public:
    int ans(vector<vector<int>> &grid, int m, int n, vector<vector<int>> &memo)
    {
        if (m >= grid.size() || n >= grid[0].size())
            return INT_MAX;
        if (m == grid.size() - 1 && n == grid[0].size() - 1)
            return grid[m][n];

        if (memo[m][n] != -1)
            return memo[m][n];

        int r = ans(grid, m + 1, n, memo);
        int l = ans(grid, m, n + 1, memo);

        return memo[m][n] = grid[m][n] + min(r, l);
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        vector<vector<int>> memo(grid.size(), vector<int>(grid[0].size(), -1));
        return ans(grid, 0, 0, memo);
    }
};