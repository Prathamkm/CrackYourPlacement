class Solution
{
public:
    void backTrack(vector<vector<int>> &grid, int &ans, int count, int i, int j)
    {
        if (i < 0 || j < 0 || i == grid.size() || j == grid[0].size() || grid[i][j] < 0)
            return;
        if (grid[i][j] == 2)
        {
            if (count == 1)
                ans++;
            return;
        }

        grid[i][j] = -2;
        backTrack(grid, ans, count - 1, i + 1, j);
        backTrack(grid, ans, count - 1, i, j + 1);
        backTrack(grid, ans, count - 1, i - 1, j);
        backTrack(grid, ans, count - 1, i, j - 1);
        grid[i][j] = 0;
    }

    int uniquePathsIII(vector<vector<int>> &grid)
    {
        int l = grid.size();
        int b = grid[0].size();
        int x;
        int y;
        int count = 0;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (grid[i][j] >= 0)
                {
                    count++;
                    if (grid[i][j] == 1)
                    {
                        x = i;
                        y = j;
                    }
                }
            }
        }
        int ans = 0;
        backTrack(grid, ans, count, x, y);
        return ans;
    }
};